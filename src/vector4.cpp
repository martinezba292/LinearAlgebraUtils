#include "vector4.hpp"

lau::Vector4D::Vector4D() {
  x_ = 0.0f;
  y_ = 0.0f;
  z_ = 0.0f;
  w_ = 0.0f;
}

lau::Vector4D::Vector4D(const Vector4D& v) {
  x_ = v.x_;
  y_ = v.y_;
  z_ = v.z_;
  w_ = v.w_;
}

lau::Vector4D::Vector4D(const float& x, const float& y, const float& z, const float& w) {
  x_ = x;
  y_ = y;
  z_ = z;
  w_ = w;
}

lau::Vector4D::Vector4D(const float& v) {
  x_ = v;
  y_ = v;
  z_ = v;
  w_ = v;
}

lau::Vector4D::~Vector4D() {
}





