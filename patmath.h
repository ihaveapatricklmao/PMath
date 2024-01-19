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
    
    Vector<T, N> operator*(const T& s) const {
      Vector<T, N> result;

      for (size_t i = 0; i < N; ++i) {
        result.components[i] = components[i] * s;
      }
      
      return result;
    }

    T operator*(const Vector<T, N>& other) const {
      T result = 0;
      
      for (size_t i = 0; i < N; ++i) {
        result += components[i] * other.components[i];
      }
      
      return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector<T, N>& vec) {
      os << "( ";
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

    double _return;
    const int pow_storage = pow;

    for (int i = 1; i != nth; i++) {
      pow *= pow_storage;
      _return = pow;
    }

    return _return;
    
  }


  // fibonacci sequence
  int Fibonacci(int nth) {
    int _return = 0;
    int x = 0;
    int upper = 1;
    int lower = 0;


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
    int factors = nth;
    int factor_arr[factors];
    
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
