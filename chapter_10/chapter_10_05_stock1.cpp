#include "chapter_10_04_stock01.h"

#include <iostream>

Stock::Stock() {
  std::cout << "default constructor" << std::endl;
  company = "no name";
  shares = 0;
  share_val = 0;
  setTotal();
}

Stock::~Stock() {
  std::cout << "deconstructor" << company << std::endl;
}

Stock::Stock(const std::string& co, int n, int pr) {
  std::cout << "para constructor" << std::endl;
  company = co;
  if (n<=0) {
    std::cout<<"the shares is not been negative"<<std::endl;
    shares = 0;
  } else {
    shares = n;
  }
  share_val = pr;
  setTotal();
}

void Stock::sell(int n, int pr) {
  if (n > shares) {
    std::cout<<"sorry sell shares is too much, aborted"<<std::endl;
  } else {
    shares = n;
    share_val = pr;
  }
  setTotal();
}

void Stock::buy(int n, int pr){
  if (n < 0) {
    std::cout << "buy shares is not been negative, aborted" << std::endl;
  } else {
    shares += n;
    share_val = pr;
  }
  setTotal();
}

void Stock::update(int pr) {
  share_val = pr;
  setTotal();
}

void Stock::show() {
  std::cout<<"company:"<<company<<std::endl;
  std::cout<<"total:"<<tol<<std::endl;
}

