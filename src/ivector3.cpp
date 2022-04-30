#include "ivector3.hpp"

lau::IVector3D::IVector3D() {
  x_ = 0;
  y_ = 0;
  z_ = 0;
}

lau::IVector3D::IVector3D(const IVector3D& v) {
  x_ = v.x_;
  y_ = v.y_;
  z_ = v.z_;
}

lau::IVector3D::IVector3D(const int32_t& x, const int32_t& y, const int32_t& z) {
  x_ = x;
  y_ = y;
  z_ = z;
}

lau::IVector3D::IVector3D(const int32_t& v) {
  x_ = v;
  y_ = v;
  z_ = v;
}

lau::IVector3D::~IVector3D() {
}





