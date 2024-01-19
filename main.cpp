#include "patmath.h"

int main() {
 
  //std::cout << PATMath::Fibonacci(10) << "\n";

  
  uint64_t factor = PATMath::Factorial(47);
  PATMath::Vector<int, 3> vec3 = {3, 2, 4};
  
  vec3 = vec3 * 4;
  
  for (size_t x = 0; x < 3; x++) {
    std::cout << vec3.components[x] << "\n";
  }

  //std::cout << factor << "\n";

  return -1;
}
