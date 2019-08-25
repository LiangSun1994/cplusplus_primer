#include <iostream>
#include <string>
using namespace std;
/*
string version1(const string& s1,const string& s2);
string& version2(string& s1, const string& s2);
const string& version3(string& s1,const string& s2);
int main()
{
  string s1 = "liang";
  string s2 = "sun";
  string res = version1(s1,s2);
  cout<<"res:"<<res<<endl;

  string& resVersion2 = version2(s1, "***");
  cout<<resVersion2<<endl;

  //按道理会将返回的引用复制到reVersion3中，但是该函数使用返回临时变量导致segmentation fault
  string resVersion3 = version3(s1,"***");
  cout<<resVersion3<<endl;
  return 0;
}

string version1(const string&s1, const string& s2){
  string temp= s2 + s1 + s2;
  return temp;
}

string& version2(string& s1,const string& s2){
  s1 = s2 + s1 + s2;
  return s1;
}
//
const string& version3(string& s1,const string& s2){
  string temp= s2 + s1 + s2;
  return temp;
}
*/
