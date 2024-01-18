#pragma once
#ifndef PMATH_H
#define PMATH_H

#include <iostream>
#include <cstdio>


namespace PATMath 
{
  
  struct Vector2i {
    int x, y;
      
    Vector2i(int x, int y) : x(x), y(y) {}
      
    Vector2i operator*(int s) const {
      return Vector2i(x*s, y*s);
    }
  };

  struct Vector3i {
    int x, y, z;
    
    Vector3i(int x, int y, int z) : x(x), y(y), z(z) {} 
    
    Vector3i operator*(int s) const {
      return Vector3i(x*s, y*s, z*s);
    }
  };

  struct Vector4i {
    int x, y, z, i;

    Vector4i(int x, int y, int z, int i) : x(x), y(y), z(z), i(i) {}

    Vector4i operator*(int s) const {
      return Vector4i(x*s, y*s, z*s, i*s);
    }
  };

  struct Vector2d {
    double x, y;
    
    Vector2d(double x, double y) : x(x), y(y) {}

    Vector2d operator*(int s) const {
      return Vector2d(x*s, y*s);
    }
  };

  struct Vector3d {
    double x, y, z;

    Vector3d(double x, double y, double z) : x(x), y(y), z(z) {}
    
    Vector3d operator*(int s) const {
      return Vector3d(x*s, y*s, z*s);
    }
  };

  struct Vector4d {
    double x, y, z, i;
    
    Vector4d(double x, double y, double z, double i) : x(x), y(y), z(z), i(i) {}

    Vector4d operator*(int s) const {
      return Vector4d(x*s, y*s, z*s, i*s);
    }
  };


  // dot products for vectors
  int Vec2i_DotProduct(Vector2i vec_a, Vector2i vec_b) {
    return vec_a.x * vec_b.x + vec_a.y * vec_b.y;
  }

  int Vec3i_DotProduct(Vector3i vec_a, Vector3i vec_b) {
    return vec_a.x * vec_b.x + vec_a.y * vec_b.y + vec_a.z * vec_b.z;
  }
  
  int Vec4i_DotProduct(Vector4i vec_a, Vector4i vec_b) {
    return vec_a.x * vec_b.x + vec_a.y * vec_b.y + vec_a.z * vec_b.z + vec_a.i * vec_b.i;
  }

  double Vec2d_DotProduct(Vector2d vec_a, Vector2d vec_b) {
    return vec_a.x * vec_b.x + vec_a.y * vec_b.y;
  }
  
  double Vec3d_DotProduct(Vector3d vec_a, Vector3d vec_b) {
    return vec_a.x * vec_b.x + vec_a.y * vec_b.y + vec_a.z * vec_b.z;
  }

  double Vec4d_DotProduct(Vector4d vec_a, Vector4d vec_b) {
    return vec_a.x * vec_b.x + vec_a.y * vec_b.y + vec_a.z * vec_b.z + vec_a.i * vec_b.i;
  }


  // custom power function
  double Power(int pow, int nth) {

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
