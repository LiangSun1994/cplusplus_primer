#include <iostream>
using namespace std;

int int_in_str(const char * str, char c);
int main(){
  char * str = "mmmmnnn";
  cout<<int_in_str(str,'n');
}

int int_in_str(const char* str,char c){
  const char * p = str;
  int res = 0;
  while(*p){
    if(*p == c){
      ++res;
    }
    ++p;
  }
  return res;
}