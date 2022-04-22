#ifndef __Vector2D_H__
#define __Vector2D_H__ 1

#include <math.h>
#include <stdint.h>

namespace lau {
  class Vector2D {
    public:
      Vector2D();
      Vector2D(const Vector2D& v);
      Vector2D(const float& x, const float& y);
      Vector2D(const float& v);
      ~Vector2D();
      



    public:
      inline float dot(const Vector2D& v) {
        return (x_ * v.x_ + y_ * v.y_);
      }

      inline Vector2D cross(const Vector2D& v) {
        return Vector2D(y_ * v.x_ - x_ * v.y_, 
                        x_ * v.y_ - y_ * v.x_);
      }

      inline float module() {
       return sqrtf(dot(*this));
      }
      
      inline Vector2D normalized() {
        return (Vector2D((*this) / module()));
      }




    public:
      inline Vector2D operator+(const Vector2D& v) {
        return Vector2D(x_ + v.x_, y_ + v.y_);
      }

      inline Vector2D operator+(const float& v) {
        return Vector2D(x_ + v, y_ + v);
      }

      inline Vector2D operator-(const Vector2D& v) {
        return Vector2D(x_ - v.x_, y_ - v.y_);
      }

      inline Vector2D operator-(const float& v) {
        return Vector2D(x_ - v, y_ - v);
      }

      inline Vector2D operator*(const Vector2D& v) {
        return Vector2D(x_ * v.x_, y_ * v.y_);
      }

      inline Vector2D operator*(const float& v) {
        return Vector2D(x_ * v, y_ * v);
      }

      inline Vector2D operator/(const Vector2D& v) {
        return Vector2D(x_ / v.x_, y_ / v.y_);
      }

      inline Vector2D operator/(const float& v){
        float s = 1.0f / v;
        return Vector2D(x_ * s, y_ * s);
      }




    public:
      inline Vector2D& operator+=(const Vector2D& v) {
        x_ += v.x_;
        y_ += v.y_;

        return (*this);
      }

      inline Vector2D& operator-=(const Vector2D& v) {
        x_ -= v.x_;
        y_ -= v.y_;

        return (*this);
      }

      inline Vector2D& operator*=(const Vector2D& v) {
        x_ *= v.x_;
        y_ *= v.y_;

        return (*this);
      }

      inline Vector2D& operator/=(const Vector2D& v) {
        x_ /= v.x_;
        y_ /= v.y_;

        return (*this);
      }

      inline Vector2D& operator+=(const float& v) {
        x_ += v;
        y_ += v;

        return (*this);
      }

      inline Vector2D& operator-=(const float& v) {
        x_ -= v;
        y_ -= v;

        return (*this);
      }

      inline Vector2D& operator*=(const float& v) {
        x_ *= v;
        y_ *= v;

        return (*this);
      }

      inline Vector2D& operator/=(const float& v) {
        float s = 1.0f / v;
        x_ *= s;
        y_ *= s;

        return (*this);
      }

      inline void operator=(const Vector2D& v) {
        x_ = v.x_;
        y_ = v.y_;
      }

      inline void operator=(const float& v) {
        x_ = v;
        y_ = v;
      }

      inline float& operator[](const uint32_t& i) {
        return ((&x_)[i]);
      }

      inline const float& operator[](const uint32_t& i) const {
        return ((&x_)[i]);
      }



    public:
      float x_;
      float y_;
  };
}

#endif