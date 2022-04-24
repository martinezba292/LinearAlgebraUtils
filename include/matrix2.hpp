#ifndef __MATRIX2D_H__
#define __MATRIX2D_H__ 1

#include "vector2.hpp"
#include <stdint.h>

//MAJOR COLUMN ORDER FOR GLSL
namespace lau {
  class Matrix2D {
    public:
      Matrix2D();
      Matrix2D(const Matrix2D& matrix);
      Matrix2D(const float m[4]);
      Matrix2D(float m00,float m01, float m10, float m11);
      ~Matrix2D();

      static Matrix2D translate(float x);
      static Matrix2D rotate(float angle);
      static Matrix2D scale(float x, float y);


    public:
      Matrix2D operator+(const Matrix2D& mat);
      Matrix2D operator-(const Matrix2D& mat);
      Matrix2D operator*(const Matrix2D& mat);
      Vector2D operator*(const Vector2D& v);
      Matrix2D& operator+=(const Matrix2D& mat);
      Matrix2D& operator-=(const Matrix2D& mat);
      Matrix2D& operator*=(const Matrix2D& mat);
      Matrix2D& operator=(const Matrix2D& mat);



    public:
      inline float& operator[](const uint32_t& i) {
        return m_[i];
      }

      inline const float& operator[](const uint32_t& i) const {
        return m_[i];
      }



    private:
      float m_[4];
  };
}


#endif