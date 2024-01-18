#include "patmath.h"

int main() {
 
  //std::cout << PATMath::Fibonacci(10) << "\n";

  
  uint64_t factor = PATMath::Factorial(47);
  PATMath::Vector3i test(2, 1, 0);
  test = test * 4;
  std::cout << test.x << "\n";

  //std::cout << factor << "\n";

  return -1;
}
