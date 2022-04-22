#ifndef __Matrix4D_H__
#define __Matrix4D_H__ 1

#include "vector3.hpp"
#include "vector4.hpp"
#include <stdint.h>

namespace lau {
  class Matrix4D {
    public:
      Matrix4D();
      Matrix4D(const Matrix4D& matrix);
      Matrix4D(const float m[16]);
      Matrix4D(const Vector4D& v1, const Vector4D& v2, const Vector4D& v3, const Vector4D& v4);
      Matrix4D(float m00,float m01, float m02, float m03, 
               float m10,float m11, float m12, float m13, 
               float m20,float m21, float m22, float m23, 
               float m30,float m31, float m32, float m33); 
      ~Matrix4D();

    public:
      static Matrix4D translate(float x, float y, float z);
      static Matrix4D rotate(const Vector3D& axis, float angle);
      static Matrix4D scale(float x, float y, float z);
      static Matrix4D lookAt(const Vector3D& position, const Vector3D& direction, const Vector3D& up);
      static Matrix4D perspective(float fov, float aspect, float near, float far);


    public:
      Matrix4D operator+(const Matrix4D& mat);
      Matrix4D operator-(const Matrix4D& mat);
      Matrix4D operator*(const Matrix4D& mat);
      Vector4D operator*(const Vector4D& v);
      Matrix4D& operator+=(const Matrix4D& mat);
      Matrix4D& operator-=(const Matrix4D& mat);
      Matrix4D& operator*=(const Matrix4D& mat);
      Matrix4D& operator=(const Matrix4D& mat);



    public:
      inline float& operator[](const uint32_t& i) {
        return m_[i];
      }

      inline const float& operator[](const uint32_t& i) const {
        return m_[i];
      }



    private:
      float m_[16];
  };
}


#endif