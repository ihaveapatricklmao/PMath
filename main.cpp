#include "patmath.h"

int main() {
   
  uint64_t factor = PATMath::Factorial(47);
  PATMath::Vector<int, 3> vec3_a = {3, 2, 4};
  PATMath::Vector<int, 3> vec3_b = {2, 4, 1};

  int dotProductResult = vec3_a * vec3_b;

  std::cout << dotProductResult << "\n";

  std::cout << vec3_a << "\n";
  
  int test = PATMath::Power(2, 4);

  std::cout << test << "\n";
  return -1;
}
