#include "vector2.hpp"

lau::Vector2D::Vector2D() {
  x_ = 0.0f;
  y_ = 0.0f;
}

lau::Vector2D::Vector2D(const Vector2D& v) {
  x_ = v.x_;
  y_ = v.y_;
}

lau::Vector2D::Vector2D(const float& x, const float& y) {
  x_ = x;
  y_ = y;
}

lau::Vector2D::Vector2D(const float& v) {
  x_ = v;
  y_ = v;
}

lau::Vector2D::~Vector2D() {
}





