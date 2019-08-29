#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

const long size = 1000000;

int main(){
  vector<int> v(size);
  std::generate(v.begin(), v.end(), rand);

  //use lameda function
  int number_divide_3 = std::count_if(v.begin(), v.end(), [](int a){return a%3 == 0;});
  cout<<number_divide_3<<endl;

  //use single varialbe
  int number_3 = 0;
  for_each(v.begin(), v.end(), [&number_3](int a){number_3 += a%3 ==0;});
  cout<<number_3<<endl;

  int nu_3 = 0;
  int nu_13 = 0;
  for_each(v.begin(), v.end(), [&](int a){nu_3 += a%3 ==0; nu_13 += a%13 ==0;});
  cout<<nu_3<<endl;
  cout<<nu_13<<endl;

}