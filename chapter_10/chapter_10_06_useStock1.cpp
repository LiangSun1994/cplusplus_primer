#include "chapter_10_04_stock01.h"

#include <iostream>


int main() {
  Stock s1("liang", 1, 2);
  Stock s2("sun", 10, 20);

  std::cout << "show s1 and s2"<< std::endl;
  s1.show();
  s2.show();

  std::cout << "assgin s2 to s1" << std::endl;
  s1 = s2;
  std::cout << "show s1 and s2"<< std::endl;
  s1.show();
  s2.show();

  s2 = Stock("wan", 50, 50);
  s2.show();
}