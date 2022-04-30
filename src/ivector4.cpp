#include "ivector4.hpp"

lau::IVector4D::IVector4D() {
  x_ = 0;
  y_ = 0;
  z_ = 0;
  w_ = 0;
}

lau::IVector4D::IVector4D(const IVector4D& v) {
  x_ = v.x_;
  y_ = v.y_;
  z_ = v.z_;
  w_ = v.w_;
}

lau::IVector4D::IVector4D(const int32_t& x, const int32_t& y, const int32_t& z, const int32_t& w) {
  x_ = x;
  y_ = y;
  z_ = z;
  w_ = w;
}

lau::IVector4D::IVector4D(const int32_t& v) {
  x_ = v;
  y_ = v;
  z_ = v;
  w_ = v;
}

lau::IVector4D::~IVector4D() {
}





