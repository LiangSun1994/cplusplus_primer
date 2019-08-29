#include <iostream>
#include <string>
using namespace std;
class useless {
 private:
  static int n;//number of subject
  int len;
  char * p; // address of string
  void showObject();
 public:
  useless();//default construct
  ~useless();// default deconstruct
  explicit useless(int len);// len construct
  useless(int len, char c);// two argument construct
  useless(const useless& u);
  useless(useless&& u); //move construct
  useless operator+(const useless& u) const; // operator +
  void showData() const;
};

int useless::n = 0;

useless::useless() {
  ++n;
  cout<<"we are in default construct, the number of objects is:"<<n<<endl;
  p = nullptr;
  len = 0;
  showObject();
}

void useless::showObject() {
  cout<<"the object length = "<<len<< " the object address is:" << (void *)p<<endl;
}

useless::useless(int l) {
  ++n;
  cout<<"we are in useless(int l) construct, the number of objects is:"<<n<<endl;
  len = l;
  p = new char[len];
  showObject();
}

useless::useless(int l, char c) {
  ++n;
  cout<<"we are in useless(int len,char c) construct, the number of objects is:"<<n<<endl;
  len = l;
  p = new char[len];
  for(int i =0;i<len;i++){
    p[i] = c;
  }
  showObject();
}

useless::useless(const useless &u) {//copy construct,deep copy
  ++n;
  cout<<"we are in copy construct. the number of objects is:"<<n<<endl;
  len = u.len;
  p = new char[len];
  for(int i = 0;i<len;i++){
    p[i] = u.p[i];
  }
  showObject();
}

useless::useless(useless&& u) {//move construct
  cout<<"we are in move construct, the number of object is"<<n<<endl;
  len = u.len;
  p = u.p;
  u.p = nullptr;
  u.len = 0;
  showObject();
}

useless::~useless() {
  --n;
  cout<<"we are in deconstructor, the number of object is"<<n<<endl;
  showObject();
  delete[] p;
}

useless useless::operator+(const useless &u) const {
  cout<<"we are in operator+"<<endl;
  useless re = useless(n + u.n);

  for(int i =0; i < n; i++){
    re.p[i] = p[i];
  }
  for(int i = n;i < re.n; i++){
    re.p[i] = u.p[i - n];
  }
  return re;
}

void useless::showData() const {
  for(int i = 0; i < n; i++){
    cout<<p[i]<<endl;
  }
  cout<<endl;
}

int main(){
  useless one(2,'x');// default construct
  useless two = one; // copy construct
  cout<<"------------------------"<<endl;

  useless four(one + two); //default construct +  move construct

  cout<<"one ---------------"<<endl;
  one.showData();
  cout<<"two ---------------"<<endl;
  //three.showData();
}
