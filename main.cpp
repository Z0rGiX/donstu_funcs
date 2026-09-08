#include <iostream>
#include <vector>
#include <iomanip>
#include "funcline.h"

int main() {
  std::cout << "Func test example" << std::endl;
  std::vector k = {1.1, -3.5};
  FuncLine line(k);
  // each point in manual mode
  std::cout << "Manual mode" << std::endl;
  for(int i = -10; i < 10; ++i){
    std::cout << "y(" << std::setw(3) << i << ") = " << line.calc(i) << std::endl;
  }
  // each point for array of x
  std::cout << "All array mode" << std::endl;
  auto res = line.calcAll(-10, 0.1, 10);
  for(size_t i = 0; i < res.size(); ++i){
    std::cout << "y(" << std::setw(4) << res[i].first << ") = " << res[i].second << std::endl;
  }
  return 0;
}
