#include "ivector2.hpp"

lau::IVector2D::IVector2D() {
  x_ = 0;
  y_ = 0;
}

lau::IVector2D::IVector2D(const IVector2D& v) {
  x_ = v.x_;
  y_ = v.y_;
}

lau::IVector2D::IVector2D(const int32_t& x, const int32_t& y) {
  x_ = x;
  y_ = y;
}

lau::IVector2D::IVector2D(const int32_t& v) {
  x_ = v;
  y_ = v;
}

lau::IVector2D::~IVector2D() {
}





