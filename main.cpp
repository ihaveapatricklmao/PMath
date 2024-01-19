#include "patmath.h"

int main() {
 
  //std::cout << PATMath::Fibonacci(10) << "\n";

  
  uint64_t factor = PATMath::Factorial(47);
  PATMath::Vector<int, 3> vec3_a = {3, 2, 4};
  PATMath::Vector<int, 3> vec3_b = {2, 4, 1};

  int dotProductResult = vec3_a * vec3_b;
  
  for (size_t x = 0; x < 3; x++) {
    std::cout << vec3_a.components[x] << "\n";
  }

  std::cout << dotProductResult << "\n";

  //std::cout << factor << "\n";

  return -1;
}
