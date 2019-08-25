#include <iostream>
using namespace std;
int cube(int a);
int cubeRef(const int& a);
/*
int main(){
  int a = 2;
  int res = cube(a);
  cout<<"a:"<<a<< "  res:"<<res<<endl;
  // because b+3 is rvalue, and cubeRef pass const reference
  // so the compiler will create temporary variable,and a will pointer
  // this temporary variable.
  //
  // 3 c and b+3 are rvalue;
   int b = 3;
   long c = 3;
  int res1 = cubeRef(b + 3);
  int res2 = cubeRef(3);
  int res3 = cubeRef(c);

  cout<<"b:"<<b<<"  res1："<<res1<<endl;
}

int cube(int a) {
  a *= a *a;
  return a;
}
int cubeRef(const int& a){
  int res= a * a;
  return res;
}
 */