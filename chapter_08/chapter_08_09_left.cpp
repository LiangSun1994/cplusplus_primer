#include<iostream>
using namespace std;
const int ArrSize = 80;
/*
char * pre(const char * source,int len =1);
int main(){
  char sample[ArrSize] ="afeafeffefeaf";
  cout<<pre(sample,3)<<endl;

  cout<<pre(sample)<<endl;
}
char * pre(const char * source,int len){
  if(len < 0) len = 0;
  int m = 0;
  while(m <= len-1 && source[m]){
    ++m;
  }
  char * res = new char[m+1];
  for(int i = 0;i<m;i++){
    res[i] = source[i];
  }
  res[m] = '\0';
  return res;
}
 */
