#include "patmath.h"

int main() {
   
  uint64_t factor = PATMath::Factorial(47);
  PATMath::Vector<int, 3> vec3_a = {13, 5, 44};
  PATMath::Vector<int, 3> vec3_b = {4, 23, 7};
  PATMath::Vector<int, 3> vec3_c = {2, 10, 8};

  int final_dot_product;

  PATMath::Vector<int, 3> inner_cross_product = vec3_b * vec3_c;

  std::cout << inner_cross_product << "\n";

  final_dot_product = vec3_a * inner_cross_product;

  std::cout << final_dot_product << "\n";

  return -1;
}
