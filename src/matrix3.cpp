#include "matrix3.hpp"
#include <cstdio>

lau::Matrix3D::Matrix3D() {
   for (size_t i = 0; i < 9; i++) {
    m_[i] = 0.0f;
  }
  m_[0] = 1.0f;
  m_[4] = 1.0f;
  m_[8] = 1.0f;
}

lau::Matrix3D::Matrix3D(const Matrix3D& matrix) {
  for (size_t i = 0; i < 9; i++) {
    m_[i] = matrix.m_[i];
  }
}

lau::Matrix3D::Matrix3D(const float m[9]) {
  for (size_t i = 0; i < 9; i++) {
    m_[i] = m[i];
  }
}

lau::Matrix3D::Matrix3D(const Vector3D& v1, const Vector3D& v2, const Vector3D& v3) {
  m_[0] = v1.x_;
  m_[3] = v1.y_;
  m_[6] = v1.z_;
  m_[1] = v2.x_;
  m_[4] = v2.y_;
  m_[7] = v2.z_;
  m_[2] = v3.x_;
  m_[5] = v3.y_;
  m_[8] = v3.z_;
}

lau::Matrix3D::Matrix3D(float m00, float m01, float m02, 
                        float m10, float m11, float m12, 
                        float m20, float m21, float m22) {
  m_[0] = m00;
  m_[3] = m01;
  m_[6] = m02;
  m_[1] = m10;
  m_[4] = m11;
  m_[7] = m12;
  m_[2] = m20;
  m_[5] = m21;
  m_[8] = m22;
}

lau::Matrix3D::~Matrix3D() {

}

lau::Matrix3D lau::Matrix3D::translate(float x, float y) {
  return Matrix3D(1.0f, 0.0f, x, 
                  0.0f, 1.0f, y, 
                  0.0f, 0.0f, 1.0f);
}

lau::Matrix3D lau::Matrix3D::rotate(const Vector3D& axis, float angle) {
  Vector3D quat = (axis * sinf(angle * 0.5f));
  float w = cosf(angle * 0.5f);

  float x2 = quat.x_ * quat.x_;
  float y2 = quat.y_ * quat.y_;
  float z2 = quat.z_ * quat.z_;
  float xy = quat.x_ * quat.y_;
  float xz = quat.x_ * quat.z_;
  float yz = quat.y_ * quat.z_;
  float wx = quat.x_ * w;
  float wy = quat.y_ * w;
  float wz = quat.z_ * w;

  return Matrix3D(1.0f - 2.0f * (y2 + z2), 2.0f * (xy - wz), 2.0f * (xz + wy),
                  2.0f * (xy + wz), 1.0f - 2.0f * (x2 + z2), 2.0f * (yz - wx),
                  2.0f * (xz - wy), 2.0f * (yz + wx), 1.0f - 2.0f * (x2 + y2));
}


lau::Matrix3D lau::Matrix3D::scale(float x, float y, float z) {
  return Matrix3D(x, 0.0f, 0.0f, 
                  0.0f, y, 0.0f, 
                  0.0f, 0.0f, z);
}



lau::Matrix3D lau::Matrix3D::operator+(const Matrix3D& mat){
  return Matrix3D(m_[0] + mat.m_[0], m_[1] + mat.m_[1], m_[2] + mat.m_[2], 
                  m_[3] + mat.m_[3], m_[4] + mat.m_[4], m_[5] + mat.m_[5],
                  m_[6] + mat.m_[6], m_[7] + mat.m_[7], m_[8] + mat.m_[8]);
}

lau::Matrix3D lau::Matrix3D::operator-(const Matrix3D& mat){
  return Matrix3D(m_[0] - mat.m_[0], m_[1] - mat.m_[1], m_[2] - mat.m_[2], 
                  m_[3] - mat.m_[3], m_[4] - mat.m_[4], m_[5] - mat.m_[5],
                  m_[6] - mat.m_[6], m_[7] - mat.m_[7], m_[8] - mat.m_[8]);
}

lau::Matrix3D lau::Matrix3D::operator*(const Matrix3D& mat){
  return Matrix3D(m_[0] * mat.m_[0] + m_[3] * mat.m_[1] + m_[6] * mat.m_[2], 
                  m_[0] * mat.m_[3] + m_[3] * mat.m_[4] + m_[6] * mat.m_[5], 
                  m_[0] * mat.m_[6] + m_[3] * mat.m_[7] + m_[6] * mat.m_[8],

                  m_[1] * mat.m_[0] + m_[4] * mat.m_[1] + m_[7] * mat.m_[2], 
                  m_[1] * mat.m_[3] + m_[4] * mat.m_[4] + m_[7] * mat.m_[5], 
                  m_[1] * mat.m_[6] + m_[4] * mat.m_[7] + m_[7] * mat.m_[8], 

                  m_[2] * mat.m_[0] + m_[5] * mat.m_[1] + m_[8] * mat.m_[2], 
                  m_[2] * mat.m_[3] + m_[5] * mat.m_[4] + m_[8] * mat.m_[5], 
                  m_[2] * mat.m_[6] + m_[5] * mat.m_[7] + m_[8] * mat.m_[8]);
}

lau::Vector3D lau::Matrix3D::operator*(const Vector3D& v) {
  return Vector3D(m_[0] * v[0] + m_[3] * v[1] + m_[6] * v[2],
                  m_[1] * v[0] + m_[4] * v[1] + m_[7] * v[2],
                  m_[2] * v[0] + m_[5] * v[1] + m_[8] * v[2]);
}


lau::Matrix3D& lau::Matrix3D::operator+=(const Matrix3D& mat) {
  for (size_t i = 0; i < 9; i++) {
    m_[i] += mat.m_[i];
  }

  return (*this);
}

lau::Matrix3D& lau::Matrix3D::operator-=(const Matrix3D& mat) {
  for (size_t i = 0; i < 9; i++) {
    m_[i] -= mat.m_[i];
  }

  return (*this);
}

lau::Matrix3D& lau::Matrix3D::operator*=(const Matrix3D& mat) {
  Matrix3D dup(*this);
  m_[0] = (dup.m_[0] * mat.m_[0] + dup.m_[3] * mat.m_[1] + dup.m_[6] * mat.m_[2]); 
  m_[3] = (dup.m_[0] * mat.m_[3] + dup.m_[3] * mat.m_[4] + dup.m_[6] * mat.m_[5]); 
  m_[6] = (dup.m_[0] * mat.m_[6] + dup.m_[3] * mat.m_[7] + dup.m_[6] * mat.m_[8]);

  m_[1] = (dup.m_[1] * mat.m_[0] + dup.m_[4] * mat.m_[1] + dup.m_[7] * mat.m_[2]); 
  m_[4] = (dup.m_[1] * mat.m_[3] + dup.m_[4] * mat.m_[4] + dup.m_[7] * mat.m_[5]); 
  m_[7] = (dup.m_[1] * mat.m_[6] + dup.m_[4] * mat.m_[7] + dup.m_[7] * mat.m_[8]); 

  m_[2] = (dup.m_[2] * mat.m_[0] + dup.m_[5] * mat.m_[1] + dup.m_[8] * mat.m_[2]); 
  m_[5] = (dup.m_[2] * mat.m_[3] + dup.m_[5] * mat.m_[4] + dup.m_[8] * mat.m_[5]); 
  m_[8] = (dup.m_[2] * mat.m_[6] + dup.m_[5] * mat.m_[7] + dup.m_[8] * mat.m_[8]);

  return (*this);
}

lau::Matrix3D& lau::Matrix3D::operator=(const Matrix3D& mat) {
    for (size_t i = 0; i < 9; i++) {
    m_[i] = mat.m_[i];
  }

  return (*this);
}