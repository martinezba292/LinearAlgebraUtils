#ifndef __IVector2D_H__
#define __IVector2D_H__ 1

#include <math.h>
#include <stdint.h>

namespace lau {
  class IVector2D {
    public:
      IVector2D();
      IVector2D(const IVector2D& v);
      IVector2D(const int32_t& x, const int32_t& y);
      IVector2D(const int32_t& v);
      ~IVector2D();
      



    public:
      inline int32_t dot(const IVector2D& v) {
        return (x_ * v.x_ + y_ * v.y_);
      }

      inline IVector2D cross(const IVector2D& v) {
        return IVector2D(y_ * v.x_ - x_ * v.y_, 
                        x_ * v.y_ - y_ * v.x_);
      }

      inline float module() {
       return sqrtf(dot(*this));
      }
      
      inline IVector2D normalized() {
        return (IVector2D((*this) / module()));
      }




    public:
      inline IVector2D operator+(const IVector2D& v) {
        return IVector2D(x_ + v.x_, y_ + v.y_);
      }

      inline IVector2D operator+(const int32_t& v) {
        return IVector2D(x_ + v, y_ + v);
      }

      inline IVector2D operator-(const IVector2D& v) {
        return IVector2D(x_ - v.x_, y_ - v.y_);
      }

      inline IVector2D operator-(const int32_t& v) {
        return IVector2D(x_ - v, y_ - v);
      }

      inline IVector2D operator*(const IVector2D& v) {
        return IVector2D(x_ * v.x_, y_ * v.y_);
      }

      inline IVector2D operator*(const int32_t& v) {
        return IVector2D(x_ * v, y_ * v);
      }

      inline IVector2D operator/(const IVector2D& v) {
        return IVector2D(x_ / v.x_, y_ / v.y_);
      }

      inline IVector2D operator/(const int32_t& v){
        int32_t s = 1 / v;
        return IVector2D(x_ * s, y_ * s);
      }




    public:
      inline IVector2D& operator+=(const IVector2D& v) {
        x_ += v.x_;
        y_ += v.y_;

        return (*this);
      }

      inline IVector2D& operator-=(const IVector2D& v) {
        x_ -= v.x_;
        y_ -= v.y_;

        return (*this);
      }

      inline IVector2D& operator*=(const IVector2D& v) {
        x_ *= v.x_;
        y_ *= v.y_;

        return (*this);
      }

      inline IVector2D& operator/=(const IVector2D& v) {
        x_ /= v.x_;
        y_ /= v.y_;

        return (*this);
      }

      inline IVector2D& operator+=(const int32_t& v) {
        x_ += v;
        y_ += v;

        return (*this);
      }

      inline IVector2D& operator-=(const int32_t& v) {
        x_ -= v;
        y_ -= v;

        return (*this);
      }

      inline IVector2D& operator*=(const int32_t& v) {
        x_ *= v;
        y_ *= v;

        return (*this);
      }

      inline IVector2D& operator/=(const int32_t& v) {
        int32_t s = 1 / v;
        x_ *= s;
        y_ *= s;

        return (*this);
      }

      inline void operator=(const IVector2D& v) {
        x_ = v.x_;
        y_ = v.y_;
      }

      inline void operator=(const int32_t& v) {
        x_ = v;
        y_ = v;
      }

      inline int32_t& operator[](const uint32_t& i) {
        return ((&x_)[i]);
      }

      inline const int32_t& operator[](const uint32_t& i) const {
        return ((&x_)[i]);
      }



    public:
      int32_t x_;
      int32_t y_;
  };
}

#endif