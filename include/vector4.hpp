#ifndef __Vector4D_H__
#define __Vector4D_H__ 1

#include <math.h>
#include <stdint.h>

namespace lau {
  class Vector4D {
    public:
      Vector4D();
      Vector4D(const Vector4D& v);
      Vector4D(const float& x, const float& y, const float& z, const float& w);
      Vector4D(const float& v);
      ~Vector4D();
      

  

    public:
      inline float dot(const Vector4D& v) {
        return (x_ * v.x_ + y_ * v.y_ + z_ * v.z_ + w_ * v.w_);
      }

      inline Vector4D cross(const Vector4D& v) {
        return Vector4D(y_ * v.z_ - z_ * v.y_, 
                        z_ * v.w_ - w_ * v.z_,
                        w_ * v.x_ - x_ * v.w_,
                        x_ * v.y_ - y_ * v.x_);
      }

      inline float module() {
       return sqrtf(dot(*this));
      }

      inline Vector4D normalized() {
        return (Vector4D((*this) / module()));
      }




    public:
      inline Vector4D operator+(const Vector4D& v) {
        return Vector4D(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
      }

      inline Vector4D operator+(const float& v) {
        return Vector4D(x_ + v, y_ + v, z_ + v, w_ + v);
      }

      inline Vector4D operator-(const Vector4D& v) {
        return Vector4D(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
      }

      inline Vector4D operator-(const float& v) {
        return Vector4D(x_ - v, y_ - v, z_ - v, w_ - v);
      }

      inline Vector4D operator*(const Vector4D& v) {
        return Vector4D(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
      }

      inline Vector4D operator*(const float& v) {
        return Vector4D(x_ * v, y_ * v, z_ * v, w_ * v);
      }

      inline Vector4D operator/(const Vector4D& v) {
        return Vector4D(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
      }

      inline Vector4D operator/(const float& v){
        float s = 1.0f / v;
        return Vector4D(x_ * s, y_ * s, z_ * s, w_ * s);
      }




    public:
      inline Vector4D& operator+=(const Vector4D& v) {
        x_ += v.x_;
        y_ += v.y_;
        z_ += v.z_;
        w_ += v.w_;

        return (*this);
      }

      inline Vector4D& operator-=(const Vector4D& v) {
        x_ -= v.x_;
        y_ -= v.y_;
        z_ -= v.z_;
        w_ -= v.w_;

        return (*this);
      }

      inline Vector4D& operator*=(const Vector4D& v) {
        x_ *= v.x_;
        y_ *= v.y_;
        z_ *= v.z_;
        w_ *= v.w_;

        return (*this);
      }

      inline Vector4D& operator/=(const Vector4D& v) {
        x_ /= v.x_;
        y_ /= v.y_;
        z_ /= v.z_;
        w_ /= v.w_;

        return (*this);
      }

      inline Vector4D& operator+=(const float& v) {
        x_ += v;
        y_ += v;
        z_ += v;
        w_ += v;

        return (*this);
      }

      inline Vector4D& operator-=(const float& v) {
        x_ -= v;
        y_ -= v;
        z_ -= v;
        w_ -= v;

        return (*this);
      }

      inline Vector4D& operator*=(const float& v) {
        x_ *= v;
        y_ *= v;
        z_ *= v;
        w_ *= v;

        return (*this);
      }

      inline Vector4D& operator/=(const float& v) {
        float s = 1.0f / v;
        x_ *= s;
        y_ *= s;
        z_ *= s;
        w_ *= s;

        return (*this);
      }


      inline Vector4D& operator=(const Vector4D& v) {
        x_ = v.x_;
        y_ = v.y_;
        z_ = v.z_;
        w_ = v.w_;
        
        return (*this);
      }

      inline Vector4D& operator=(const float& v) {
        x_ = v;
        y_ = v;
        z_ = v;
        w_ = v;

        return (*this);
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
      float z_;
      float w_;
  };
}

#endif