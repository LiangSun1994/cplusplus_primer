#include <iostream>
#include <vector>
using namespace std;
/*
unsigned long left(unsigned long source, unsigned int l);
int main(){
  unsigned long  source = 123456789;
  for(int i =0 ;i< 18;i++){
    cout<<left(source,i)<<endl;;
  }
}

unsigned long left(unsigned long source, unsigned int l){
  int digit = 1;
  int s = source;
  if(l <= 0 || source == 0){
    return 0;
  }
  while(s /= 10){
    ++digit;
  }
  int temp = digit - l;
  if(digit > l){
    while(temp--){
      source /= 10;
    }
    return source;
  }else{
    return source;
  }
}

 */