#include "matrix2.hpp"
#include <cstdio>

lau::Matrix2D::Matrix2D() {
   for (size_t i = 0; i < 4; i++) {
    m_[i] = 0.0f;
  }
  m_[0] = 1.0f;
  m_[3] = 1.0f;
}

lau::Matrix2D::Matrix2D(const Matrix2D& matrix) {
  for (size_t i = 0; i < 4; i++) {
    m_[i] = matrix.m_[i];
  }
}

lau::Matrix2D::Matrix2D(const float m[4]) {
  for (size_t i = 0; i < 4; i++) {
    m_[i] = m[i];
  }
}

lau::Matrix2D::Matrix2D(float m00, float m01, float m10, float m11) {
  m_[0] = m00;
  m_[2] = m01;
  m_[1] = m10;
  m_[3] = m11;
}

lau::Matrix2D::~Matrix2D() {

}

lau::Matrix2D lau::Matrix2D::translate(float x) {
  return Matrix2D(1.0f, x, 
                  0.0f, 1.0f);
}

lau::Matrix2D lau::Matrix2D::rotate(float angle) {
  float c = cosf(angle);
  float s = sinf(angle);

  return Matrix2D(c, -s, s, c);
}

lau::Matrix2D lau::Matrix2D::scale(float x, float y) {
  return Matrix2D(x, 0.0f, 0.0f, y);
}



lau::Matrix2D lau::Matrix2D::operator+(const Matrix2D& mat){
  return Matrix2D(m_[0] + mat.m_[0], m_[1] + mat.m_[1], 
                  m_[2] + mat.m_[2], m_[3] + mat.m_[3]);
}

lau::Matrix2D lau::Matrix2D::operator-(const Matrix2D& mat){
  return Matrix2D(m_[0] - mat.m_[0], m_[1] - mat.m_[1], 
                  m_[2] - mat.m_[2], m_[3] - mat.m_[3]);
}

lau::Matrix2D lau::Matrix2D::operator*(const Matrix2D& mat){
  return Matrix2D(m_[0] * mat.m_[0] + m_[2] * mat.m_[1], 
                  m_[0] * mat.m_[2] + m_[2] * mat.m_[3],
                  
                  m_[1] * mat.m_[0] + m_[3] * mat.m_[1],
                  m_[1] * mat.m_[2] + m_[3] * mat.m_[3]);
}

lau::Vector2D lau::Matrix2D::operator*(const Vector2D& v) {
  return Vector2D(m_[0] * v[0] + m_[2] * v[1], 
                  m_[1] * v[0] + m_[3] * v[1]);
}


lau::Matrix2D& lau::Matrix2D::operator+=(const Matrix2D& mat) {
  for (size_t i = 0; i < 4; i++) {
    m_[i] += mat.m_[i];
  }

  return (*this);
}

lau::Matrix2D& lau::Matrix2D::operator-=(const Matrix2D& mat) {
  for (size_t i = 0; i < 4; i++) {
    m_[i] -= mat.m_[i];
  }

  return (*this);
}

lau::Matrix2D& lau::Matrix2D::operator*=(const Matrix2D& mat) {
  m_[0] = (m_[0] * mat.m_[0] + m_[2] * mat.m_[1]); 
  m_[2] = (m_[0] * mat.m_[2] + m_[2] * mat.m_[3]);
  m_[1] = (m_[1] * mat.m_[0] + m_[3] * mat.m_[1]);
  m_[3] = (m_[1] * mat.m_[2] + m_[3] * mat.m_[3]);

  return (*this);
}

lau::Matrix2D& lau::Matrix2D::operator=(const Matrix2D& mat) {
    for (size_t i = 0; i < 4; i++) {
    m_[i] = mat.m_[i];
  }

  return (*this);
}