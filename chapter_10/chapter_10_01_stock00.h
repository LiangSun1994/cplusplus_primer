#pragma
#include <string>

class Stock {
 private:
  std::string company;
  int shares;
  int share_val;
  int tol;
  void setTotal(){tol = share_val * shares;}
 public:
  void require(const std::string& co, int n, int pr);
  void sell(int n, int pr);
  void buy(int n, int pr);
  void update(int pr);
  void show();
};