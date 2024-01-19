#pragma once
#ifndef PMATH_H
#define PMATH_H

#include <iostream>
#include <cstdio>


namespace PATMath 
{
  
  template<typename T, size_t N>


  struct Vector {
    T components[N];
    
    // scalar operation on a whole vector
    Vector<T, N> operator*=(const T& s) const {
      Vector<T, N> result;

      for (size_t i = 0; i < N; ++i) {
        result.components[i] = components[i] * s;
      }
      
      return result;
    }
    
    // dot product operator
    T operator+(const Vector<T, N>& other) const {
      T result = 0;
      
      for (size_t i = 0; i < N; ++i) {
        result += components[i] * other.components[i];
      }
      
      return result;
    }
    
    // cross product
    Vector<T, N> operator*(const Vector<T, N>& other) const {
      Vector<T, N> result;

      for (size_t i = 0; i < N; ++i) {
        result.components[i] = components[(i + 1) % N] * other.components[(i + 2) % N] - components[(i + 2) % N] * other.components[(i + 1) % N];
      }

      return result;
    } 

    friend std::ostream& operator<<(std::ostream& os, const Vector<T, N>& vec) {
      os << " ( ";
      for (size_t i = 0; i < N - 1; ++i) {
        os << vec.components[i] << " , ";
      }
      os << vec.components[N - 1] << " ) ";
      return os;
    }
  };
  

  template<typename TYPE>

  // custom power function
  TYPE Power(TYPE pow, int nth) {

    const TYPE pow_storage = pow;

    for (int i = 1; i != nth; i++) {
      pow *= pow_storage;
    }

    return pow;
    
  }


  // fibonacci sequence
  uint32_t Fibonacci(int nth) {
    uint32_t _return = 0;
    uint32_t x = 0;
    uint32_t upper = 1;
    uint32_t lower = 0;


    while (x != nth - 2) {
      _return = upper + lower;
      lower = upper;
      upper = _return; 

      x++;
    }

    return _return; 
  }


  // factorial calculator
  uint64_t Factorial(int nth) {
    uint64_t ans = 1;
    uint64_t factors = nth;
    uint64_t factor_arr[factors];
    
    for (int x = 0; x != factors; x++) {
      factor_arr[x] = factors - x;
    }

    for (int y = 0; y != factors; y++) {
      ans *= factor_arr[y];
    }
    
    return ans; 
  }

};

#endif
