#include "chapter_10_01_stock00.h"
#include <iostream>

void Stock::require(const std::string& co, int n, int pr) {
  company = co;
  if(n<=0){
    std::cout<<"the shares is not been negative"<<std::endl;
    shares = 0;
  }else{
    shares = n;
  }
  share_val = pr;
  setTotal();
}

void Stock::sell(int n, int pr){
  if(n > shares){
    std::cout<<"sorry sell shares is too much, aborted"<<std::endl;
  }else{
    shares = n;
    share_val = pr;
  }
  setTotal();
}
void Stock::buy(int n, int pr){
  if(n < 0){
    std::cout<<"buy shares is not been negative, aborted"<<std::endl;
  }else{
    shares += n;
    share_val = pr;
  }
  setTotal();
}
void Stock::update(int pr){
  share_val = pr;
  setTotal();
}
void Stock::show(){
  std::cout<<"company:"<<company<<std::endl;
  std::cout<<"total:"<<tol<<std::endl;
}

