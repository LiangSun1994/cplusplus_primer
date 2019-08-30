#include "chapter_10_01_stock00.h"
int main(){
  Stock s1;
  s1.require("liangsun", 10, 11);
  s1.show();

  s1.buy(20, 11);
  s1.show();

  s1.sell(1111,10);
  s1.show();
}