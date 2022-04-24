#include "matrix4.hpp"
#include <cstdio>

lau::Matrix4D::Matrix4D() {
   for (size_t i = 0; i < 16; i++) {
    m_[i] = 0.0f;
  }
  m_[0] = 1.0f;
  m_[5] = 1.0f;
  m_[10] = 1.0f;
  m_[15] = 1.0f;

}

lau::Matrix4D::Matrix4D(const Matrix4D& matrix) {
  for (size_t i = 0; i < 16; i++) {
    m_[i] = matrix.m_[i];
  }
}

lau::Matrix4D::Matrix4D(const float m[16]) {
  for (size_t i = 0; i < 16; i++) {
    m_[i] = m[i];
  }
}

lau::Matrix4D::Matrix4D(const Vector4D& v1, const Vector4D& v2, const Vector4D& v3, const Vector4D& v4) {

  m_[1] = v2.x_,   m_[5] = v2.y_,   m_[9] = v2.z_,    m_[13] = v2.w_;
  m_[0] = v1.x_,   m_[4] = v1.y_,   m_[8] = v1.z_,    m_[12] = v1.w_;
  m_[2] = v3.x_,   m_[6] = v3.y_,   m_[10] = v3.z_,   m_[14] = v3.w_;
  m_[3] = v4.x_,   m_[7] = v4.y_,   m_[11] = v4.z_,   m_[15] = v4.w_;
}

lau::Matrix4D::Matrix4D(float m00,float m01, float m02, float m03, 
                        float m10,float m11, float m12, float m13, 
                        float m20,float m21, float m22, float m23, 
                        float m30,float m31, float m32, float m33) {

  m_[0] = m00,   m_[4] = m01,   m_[8] = m02,    m_[12] = m03;
  m_[1] = m10,   m_[5] = m11,   m_[9] = m12,    m_[13] = m13;
  m_[2] = m20,   m_[6] = m21,   m_[10] = m22,   m_[14] = m23;
  m_[3] = m30,   m_[7] = m31,   m_[11] = m32,   m_[15] = m33;
}

lau::Matrix4D::~Matrix4D() {

}

lau::Matrix4D lau::Matrix4D::translate(float x, float y, float z) {
  return Matrix4D(1.0f, 0.0f, 0.0f, x, 
                  0.0f, 1.0f, 0.0f, y, 
                  0.0f, 0.0f, 1.0f, z,
                  0.0f, 0.0f, 0.0f, 1.0f);
}

lau::Matrix4D lau::Matrix4D::rotate(const Vector3D& axis, float angle) {
  Vector3D quat = (axis.normalized() * sinf(angle * 0.5f));
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

  return Matrix4D(1.0f - 2.0f * (y2 + z2), 2.0f * (xy - wz),        2.0f * (xz + wy),        0.0f,
                  2.0f * (xy + wz),        1.0f - 2.0f * (x2 + z2), 2.0f * (yz - wx),        0.0f,
                  2.0f * (xz - wy),        2.0f * (yz + wx),        1.0f - 2.0f * (x2 + y2), 0.0f,
                  0.0f,                    0.0f,                    0.0f,                    1.0f);
}


lau::Matrix4D lau::Matrix4D::scale(float x, float y, float z) {
  return Matrix4D(x, 0.0f, 0.0f, 0.0f, 
                  0.0f, y, 0.0f, 0.0f, 
                  0.0f, 0.0f, z, 0.0f,
                  0.0f, 0.0f, 0.0f, 1.0f);
}

lau::Matrix4D lau::Matrix4D::shear(float s, const Vector2D& direction) {
  uint32_t i = static_cast<uint32_t>(direction.y_ * 4 + direction.x_);

  Matrix4D mat;
  mat.m_[i] = s;

  return mat;
}


lau::Matrix4D lau::Matrix4D::lookAt(const Vector3D& position, const Vector3D& direction, const Vector3D& up) {
  Vector3D view = (position - direction).normalized();
  Vector3D r = (-view.cross(up)).normalized();
  Vector3D u = view.cross(r);


 return Matrix4D(r[0],    r[1],    r[2],    (-position).dot(r),
                 u[0],    u[1],    u[2],    (-position).dot(u),
                 view[0], view[1], view[2], (-position).dot(view),
                 0.0f,    0.0f,    0.0f,    1.0f);
}


lau::Matrix4D lau::Matrix4D::perspective(float fov, float aspect, float near, float far) {
  float c = (1.0f / tanf(fov*0.5f));
  return Matrix4D(c/aspect,    0.0f,      0.0f,                             0.0f,
                  0.0f,        c,         0.0f,                             0.0f,
                  0.0f,        0.0f,      -((far+near) / (far-near)),       -((2*far*near) / (far-near)),
                  0.0f,        0.0f,      -1.0f,                            0.0f);
}



lau::Matrix4D lau::Matrix4D::operator+(const Matrix4D& mat){
  return Matrix4D(m_[0] + mat.m_[0], m_[1] + mat.m_[1], m_[2] + mat.m_[2], m_[3] + mat.m_[3],
                  m_[4] + mat.m_[4], m_[5] + mat.m_[5], m_[6] + mat.m_[6], m_[7] + mat.m_[7],
                  m_[8] + mat.m_[8], m_[9] + mat.m_[9], m_[10] + mat.m_[10], m_[11] + mat.m_[11],
                  m_[12] + mat.m_[12], m_[13] + mat.m_[13], m_[14] + mat.m_[14], m_[15] + mat.m_[15]);
}

lau::Matrix4D lau::Matrix4D::operator-(const Matrix4D& mat){
  return Matrix4D(m_[0] - mat.m_[0], m_[1] - mat.m_[1], m_[2] - mat.m_[2], m_[3] - mat.m_[3],
                  m_[4] - mat.m_[4], m_[5] - mat.m_[5], m_[6] - mat.m_[6], m_[7] - mat.m_[7],
                  m_[8] - mat.m_[8], m_[9] - mat.m_[9], m_[10] - mat.m_[10], m_[11] - mat.m_[11],
                  m_[12] - mat.m_[12], m_[13] - mat.m_[13], m_[14] - mat.m_[14], m_[15] - mat.m_[15]);
}

lau::Matrix4D lau::Matrix4D::operator*(const Matrix4D& mat){
  return Matrix4D(m_[0] * mat.m_[0] + m_[4] * mat.m_[1] + m_[8] * mat.m_[2] + m_[12] * mat.m_[3], 
                  m_[0] * mat.m_[4] + m_[4] * mat.m_[5] + m_[8] * mat.m_[6] + m_[12] * mat.m_[7], 
                  m_[0] * mat.m_[8] + m_[4] * mat.m_[9] + m_[8] * mat.m_[10]+ m_[12] * mat.m_[11],
                  m_[0] * mat.m_[12]+ m_[4] * mat.m_[13]+ m_[8] * mat.m_[14]+ m_[12] * mat.m_[15], 

                  m_[1] * mat.m_[0] + m_[5] * mat.m_[1] + m_[9] * mat.m_[2] + m_[13] * mat.m_[3], 
                  m_[1] * mat.m_[4] + m_[5] * mat.m_[5] + m_[9] * mat.m_[6] + m_[13] * mat.m_[7], 
                  m_[1] * mat.m_[8] + m_[5] * mat.m_[9] + m_[9] * mat.m_[10]+ m_[13] * mat.m_[11],
                  m_[1] * mat.m_[12]+ m_[5] * mat.m_[13]+ m_[9] * mat.m_[14]+ m_[13] * mat.m_[15], 

                  m_[2] * mat.m_[0] + m_[6] * mat.m_[1] + m_[10] * mat.m_[2] + m_[14] * mat.m_[3], 
                  m_[2] * mat.m_[4] + m_[6] * mat.m_[5] + m_[10] * mat.m_[6] + m_[14] * mat.m_[7], 
                  m_[2] * mat.m_[8] + m_[6] * mat.m_[9] + m_[10] * mat.m_[10]+ m_[14] * mat.m_[11],
                  m_[2] * mat.m_[12]+ m_[6] * mat.m_[13]+ m_[10] * mat.m_[14]+ m_[14] * mat.m_[15], 

                  m_[3] * mat.m_[0] + m_[7] * mat.m_[1] + m_[11] * mat.m_[2] + m_[15] * mat.m_[3], 
                  m_[3] * mat.m_[4] + m_[7] * mat.m_[5] + m_[11] * mat.m_[6] + m_[15] * mat.m_[7], 
                  m_[3] * mat.m_[8] + m_[7] * mat.m_[9] + m_[11] * mat.m_[10]+ m_[15] * mat.m_[11],
                  m_[3] * mat.m_[12]+ m_[7] * mat.m_[13]+ m_[11] * mat.m_[14]+ m_[15] * mat.m_[15]);
}


lau::Vector4D lau::Matrix4D::operator*(const Vector4D& v) {
  return Vector4D(m_[0] * v[0] + m_[4] * v[1] + m_[8] * v[2] + m_[12] * v[3],
                  m_[1] * v[0] + m_[5] * v[1] + m_[9] * v[2] + m_[13] * v[3],
                  m_[2] * v[0] + m_[6] * v[1] + m_[10] * v[2] + m_[14] * v[3],
                  m_[3] * v[0] + m_[7] * v[1] + m_[11] * v[2] + m_[15] * v[3]);
}


lau::Matrix4D& lau::Matrix4D::operator+=(const Matrix4D& mat) {
  for (size_t i = 0; i < 16; i++) {
    m_[i] += mat.m_[i];
  }

  return (*this);
}

lau::Matrix4D& lau::Matrix4D::operator-=(const Matrix4D& mat) {
  for (size_t i = 0; i < 16; i++) {
    m_[i] -= mat.m_[i];
  }

  return (*this);
}

lau::Matrix4D& lau::Matrix4D::operator*=(const Matrix4D& mat) {
  Matrix4D dup(*this);
  m_[0] = (dup.m_[0] * mat.m_[0] + dup.m_[4] * mat.m_[1] + dup.m_[8] * mat.m_[2] + dup.m_[12] * mat.m_[3]);
  m_[4] = (dup.m_[0] * mat.m_[4] + dup.m_[4] * mat.m_[5] + dup.m_[8] * mat.m_[6] + dup.m_[12] * mat.m_[7]); 
  m_[8] = (dup.m_[0] * mat.m_[8] + dup.m_[4] * mat.m_[9] + dup.m_[8] * mat.m_[10]+ dup.m_[12] * mat.m_[11]);
  m_[12] = (dup.m_[0] * mat.m_[12]+ dup.m_[4] * mat.m_[13]+ dup.m_[8] * mat.m_[14]+ dup.m_[12] * mat.m_[15]); 
                   
  m_[1] = (dup.m_[1] * mat.m_[0] + dup.m_[5] * mat.m_[1] + dup.m_[9] * mat.m_[2] + dup.m_[13] * mat.m_[3]); 
  m_[5] = (dup.m_[1] * mat.m_[4] + dup.m_[5] * mat.m_[5] + dup.m_[9] * mat.m_[6] + dup.m_[13] * mat.m_[7]); 
  m_[9] = (dup.m_[1] * mat.m_[8] + dup.m_[5] * mat.m_[9] + dup.m_[9] * mat.m_[10]+ dup.m_[13] * mat.m_[11]);
  m_[13] = (dup.m_[1] * mat.m_[12]+ dup.m_[5] * mat.m_[13]+ dup.m_[9] * mat.m_[14]+ dup.m_[13] * mat.m_[15]); 

  m_[2] = (dup.m_[2] * mat.m_[0] + dup.m_[6] * mat.m_[1] + dup.m_[10] * mat.m_[2] + dup.m_[14] * mat.m_[3]); 
  m_[6] = (dup.m_[2] * mat.m_[4] + dup.m_[6] * mat.m_[5] + dup.m_[10] * mat.m_[6] + dup.m_[14] * mat.m_[7]); 
  m_[10] = (dup.m_[2] * mat.m_[8] + dup.m_[6] * mat.m_[9] + dup.m_[10] * mat.m_[10]+ dup.m_[14] * mat.m_[11]);
  m_[14] = (dup.m_[2] * mat.m_[12]+ dup.m_[6] * mat.m_[13]+ dup.m_[10] * mat.m_[14]+ dup.m_[14] * mat.m_[15]); 

  m_[3] = (dup.m_[3] * mat.m_[0] + dup.m_[7] * mat.m_[1] + dup.m_[11] * mat.m_[2] + dup.m_[15] * mat.m_[3]); 
  m_[7] = (dup.m_[3] * mat.m_[4] + dup.m_[7] * mat.m_[5] + dup.m_[11] * mat.m_[6] + dup.m_[15] * mat.m_[7]); 
  m_[11] = (dup.m_[3] * mat.m_[8] + dup.m_[7] * mat.m_[9] + dup.m_[11] * mat.m_[10]+ dup.m_[15] * mat.m_[11]);
  m_[15] = (dup.m_[3] * mat.m_[12]+ dup.m_[7] * mat.m_[13]+ dup.m_[11] * mat.m_[14]+ dup.m_[15] * mat.m_[15]);

  return (*this);
}

lau::Matrix4D& lau::Matrix4D::operator=(const Matrix4D& mat) {
    for (size_t i = 0; i < 16; i++) {
    m_[i] = mat.m_[i];
  }

  return (*this);
}