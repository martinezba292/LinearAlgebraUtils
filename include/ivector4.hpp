#ifndef __IVector4D_H__
#define __IVector4D_H__ 1

#include <math.h>
#include <stdint.h>

namespace lau {
  class IVector4D {
    public:
      IVector4D();
      IVector4D(const IVector4D& v);
      IVector4D(const int32_t& x, const int32_t& y, const int32_t& z, const int32_t& w);
      IVector4D(const int32_t& v);
      ~IVector4D();
      

  

    public:
      inline int32_t dot(const IVector4D& v) {
        return (x_ * v.x_ + y_ * v.y_ + z_ * v.z_ + w_ * v.w_);
      }

      inline IVector4D cross(const IVector4D& v) {
        return IVector4D(y_ * v.z_ - z_ * v.y_, 
                        z_ * v.w_ - w_ * v.z_,
                        w_ * v.x_ - x_ * v.w_,
                        x_ * v.y_ - y_ * v.x_);
      }

      inline float module() {
       return sqrtf(dot(*this));
      }

      inline IVector4D normalized() {
        return (IVector4D((*this) / module()));
      }




    public:
      inline IVector4D operator+(const IVector4D& v) {
        return IVector4D(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
      }

      inline IVector4D operator+(const int32_t& v) {
        return IVector4D(x_ + v, y_ + v, z_ + v, w_ + v);
      }

      inline IVector4D operator-(const IVector4D& v) {
        return IVector4D(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
      }

      inline IVector4D operator-(const int32_t& v) {
        return IVector4D(x_ - v, y_ - v, z_ - v, w_ - v);
      }

      inline IVector4D operator*(const IVector4D& v) {
        return IVector4D(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
      }

      inline IVector4D operator*(const int32_t& v) {
        return IVector4D(x_ * v, y_ * v, z_ * v, w_ * v);
      }

      inline IVector4D operator/(const IVector4D& v) {
        return IVector4D(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
      }

      inline IVector4D operator/(const int32_t& v){
        int32_t s = 1 / v;
        return IVector4D(x_ * s, y_ * s, z_ * s, w_ * s);
      }




    public:
      inline IVector4D& operator+=(const IVector4D& v) {
        x_ += v.x_;
        y_ += v.y_;
        z_ += v.z_;
        w_ += v.w_;

        return (*this);
      }

      inline IVector4D& operator-=(const IVector4D& v) {
        x_ -= v.x_;
        y_ -= v.y_;
        z_ -= v.z_;
        w_ -= v.w_;

        return (*this);
      }

      inline IVector4D& operator*=(const IVector4D& v) {
        x_ *= v.x_;
        y_ *= v.y_;
        z_ *= v.z_;
        w_ *= v.w_;

        return (*this);
      }

      inline IVector4D& operator/=(const IVector4D& v) {
        x_ /= v.x_;
        y_ /= v.y_;
        z_ /= v.z_;
        w_ /= v.w_;

        return (*this);
      }

      inline IVector4D& operator+=(const int32_t& v) {
        x_ += v;
        y_ += v;
        z_ += v;
        w_ += v;

        return (*this);
      }

      inline IVector4D& operator-=(const int32_t& v) {
        x_ -= v;
        y_ -= v;
        z_ -= v;
        w_ -= v;

        return (*this);
      }

      inline IVector4D& operator*=(const int32_t& v) {
        x_ *= v;
        y_ *= v;
        z_ *= v;
        w_ *= v;

        return (*this);
      }

      inline IVector4D& operator/=(const int32_t& v) {
        int32_t s = 1 / v;
        x_ *= s;
        y_ *= s;
        z_ *= s;
        w_ *= s;

        return (*this);
      }


      inline IVector4D& operator=(const IVector4D& v) {
        x_ = v.x_;
        y_ = v.y_;
        z_ = v.z_;
        w_ = v.w_;
        
        return (*this);
      }

      inline IVector4D& operator=(const int32_t& v) {
        x_ = v;
        y_ = v;
        z_ = v;
        w_ = v;

        return (*this);
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
      int32_t z_;
      int32_t w_;
  };
}

#endif