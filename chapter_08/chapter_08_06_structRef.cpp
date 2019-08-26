#include <iostream>
/*
using namespace std;
struct free_throws{
  std::string name;
  int made;
  int attempt;
  double percent;
};

void display(const free_throws& ft);
void setPc(free_throws& ft);
free_throws& acculate(free_throws& ft, const free_throws& source);

int main(){

  free_throws one = {"sun",1,2};
  free_throws two = {"liang",2,3};
  free_throws team;

  display(one);
  setPc(one);
  display(one);


  cout<<"----------"<<endl;
  acculate(team,one);
  display(team);

  //use return value in assignment
  // if return reference to a value, this value will copy
  // if recevier is reference, it won't copy
  free_throws& dumps = acculate(one,two);
  cout<<&dumps<<endl;

}

void display(const free_throws& ft){
  cout<<"name:"<<ft.name<<" made"<<ft.made<<" attempt:"<<ft.attempt<<" percent:"<<ft.percent<<endl;
}

void setPc(free_throws& ft){
  if(ft.attempt != 0){
    ft.percent = ft.made*1.0/ft.attempt;
  }else {
    ft.percent = 0.0;
  }
}
free_throws& acculate(free_throws&ft,const free_throws& source){
  ft.attempt += source.attempt;
  ft.made += source.made;
  setPc(ft);
  cout<<"ft in function acculate"<< &ft<<endl;
  return ft;
}
*/