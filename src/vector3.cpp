#include "vector3.hpp"

lau::Vector3D::Vector3D() {
  x_ = 0.0f;
  y_ = 0.0f;
  z_ = 0.0f;
}

lau::Vector3D::Vector3D(const Vector3D& v) {
  x_ = v.x_;
  y_ = v.y_;
  z_ = v.z_;
}

lau::Vector3D::Vector3D(const float& x, const float& y, const float& z) {
  x_ = x;
  y_ = y;
  z_ = z;
}

lau::Vector3D::Vector3D(const float& v) {
  x_ = v;
  y_ = v;
  z_ = v;
}

lau::Vector3D::~Vector3D() {
}





