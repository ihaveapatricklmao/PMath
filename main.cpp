#include "patmath.h"

int main() {
   
  uint64_t factor = PATMath::Factorial(47);
  PATMath::Vector<int, 3> vec3_a = {3, 5, 4};
  PATMath::Vector<int, 3> vec3_b = {2, 4, 1};

  PATMath::Vector<int, 3> inner_cross_product = {0, 0, 0};
  PATMath::Vector<int, 3> outer_cross_product = {0, 0, 0};
  int final_dot_product;

  inner_cross_product = vec3_a * vec3_b;
  outer_cross_product = vec3_a * inner_cross_product;

  std::cout << inner_cross_product << "\n";
  std::cout << outer_cross_product << "\n";

  final_dot_product = vec3_a + outer_cross_product;

  std::cout << final_dot_product << "\n";

  return -1;
}
