#ifndef __MATRIX3D_H__
#define __MATRIX3D_H__ 1

#include "vector3.hpp"
#include <stdint.h>

//MAJOR COLUMN ORDER FOR GLSL
namespace lau {
  class Matrix3D {
    public:
      Matrix3D();
      Matrix3D(const Matrix3D& matrix);
      Matrix3D(const float m[9]);
      Matrix3D(const Vector3D& v1, const Vector3D& v2, const Vector3D& v3);
      Matrix3D(float m00,float m01, float m02, 
               float m10,float m11, float m12, 
               float m20,float m21, float m22); 
      ~Matrix3D();

      static Matrix3D translate(float x, float y);
      static Matrix3D rotate(const Vector3D& axis, float angle);
      static Matrix3D scale(float x, float y, float z);


    public:
      Matrix3D operator+(const Matrix3D& mat);
      Matrix3D operator-(const Matrix3D& mat);
      Matrix3D operator*(const Matrix3D& mat);
      Vector3D operator*(const Vector3D& v);
      Matrix3D& operator+=(const Matrix3D& mat);
      Matrix3D& operator-=(const Matrix3D& mat);
      Matrix3D& operator*=(const Matrix3D& mat);
      Matrix3D& operator=(const Matrix3D& mat);



    public:
      inline float& operator[](const uint32_t& i) {
        return m_[i];
      }

      inline const float& operator[](const uint32_t& i) const {
        return m_[i];
      }



    private:
      float m_[9];
  };
}


#endif