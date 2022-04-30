#ifndef __IVector3D_H__
#define __IVector3D_H__ 1

#include <math.h>
#include <stdint.h>

namespace lau {
  class IVector3D {
    public:
      IVector3D();
      IVector3D(const IVector3D& v);
      IVector3D(const int32_t& x, const int32_t& y, const int32_t& z);
      IVector3D(const int32_t& v);
      ~IVector3D();
      


    public:
      inline int32_t dot(const IVector3D& v) const {
        return (x_ * v.x_ + y_ * v.y_ + z_ * v.z_);
      }

      inline IVector3D cross(const IVector3D& v) const {
        return IVector3D(y_ * v.z_ - z_ * v.y_, 
                        z_ * v.x_ - x_ * v.z_,
                        x_ * v.y_ - y_ * v.x_);
      }

      inline float module() const {
        return sqrtf(dot(*this));
      }
      

      inline IVector3D normalized() const {
        return (IVector3D((*this) / module()));
      }


    public:
      inline IVector3D operator+(const IVector3D& v) {
        return IVector3D(x_ + v.x_, y_ + v.y_, z_ + v.z_);
      }

      inline IVector3D operator+(const IVector3D& v) const {
        return IVector3D(x_ + v.x_, y_ + v.y_, z_ + v.z_);
      }


      inline IVector3D operator+(const int32_t& v) {
        return IVector3D(x_ + v, y_ + v, z_ + v);
      }

      inline IVector3D operator+(const int32_t& v) const {
        return IVector3D(x_ + v, y_ + v, z_ + v);
      }


      inline IVector3D operator-(const IVector3D& v) {
        return IVector3D(x_ - v.x_, y_ - v.y_, z_ - v.z_);
      }

      inline IVector3D operator-(const IVector3D& v) const {
        return IVector3D(x_ - v.x_, y_ - v.y_, z_ - v.z_);
      }


      inline IVector3D operator-(const int32_t& v) {
        return IVector3D(x_ - v, y_ - v, z_ - v);
      }

      inline IVector3D operator-(const int32_t& v) const {
        return IVector3D(x_ - v, y_ - v, z_ - v);
      }

      inline IVector3D operator-() {
        return IVector3D(-x_, -y_, -z_);
      }

      inline IVector3D operator-() const {
        return IVector3D(-x_, -y_, -z_);
      }


      inline IVector3D operator*(const IVector3D& v) {
        return IVector3D(x_ * v.x_, y_ * v.y_, z_ * v.z_);
      }

      inline IVector3D operator*(const IVector3D& v) const {
        return IVector3D(x_ * v.x_, y_ * v.y_, z_ * v.z_);
      }


      inline IVector3D operator*(const int32_t& v) {
        return IVector3D(x_ * v, y_ * v, z_ * v);
      }

      inline IVector3D operator*(const int32_t& v) const {
        return IVector3D(x_ * v, y_ * v, z_ * v);
      }


      inline IVector3D operator/(const IVector3D& v) {
        return IVector3D(x_ / v.x_, y_ / v.y_, z_ / v.z_);
      }

      inline IVector3D operator/(const IVector3D& v) const {
        return IVector3D(x_ / v.x_, y_ / v.y_, z_ / v.z_);
      }


      inline IVector3D operator/(const int32_t& v){
        int32_t s = 1 / v;
        return IVector3D(x_ * s, y_ * s, z_ * s);
      }

      inline IVector3D operator/(const int32_t& v) const {
        int32_t s = 1 / v;
        return IVector3D(x_ * s, y_ * s, z_ * s);
      }




    public:
      inline IVector3D& operator+=(const IVector3D& v) {
        x_ += v.x_;
        y_ += v.y_;
        z_ += v.z_;

        return (*this);
      }

      inline IVector3D& operator-=(const IVector3D& v) {
        x_ -= v.x_;
        y_ -= v.y_;
        z_ -= v.z_;

        return (*this);
      }

      inline IVector3D& operator*=(const IVector3D& v) {
        x_ *= v.x_;
        y_ *= v.y_;
        z_ *= v.z_;

        return (*this);
      }

      inline IVector3D& operator/=(const IVector3D& v) {
        x_ /= v.x_;
        y_ /= v.y_;
        z_ /= v.z_;

        return (*this);
      }

      inline IVector3D& operator+=(const int32_t& v) {
        x_ += v;
        y_ += v;
        z_ += v;

        return (*this);
      }

      inline IVector3D& operator-=(const int32_t& v) {
        x_ -= v;
        y_ -= v;
        z_ -= v;

        return (*this);
      }

      inline IVector3D& operator*=(const int32_t& v) {
        x_ *= v;
        y_ *= v;
        z_ *= v;

        return (*this);
      }

      inline IVector3D& operator/=(const int32_t& v) {
        int32_t s = 1 / v;
        x_ *= s;
        y_ *= s;
        z_ *= s;

        return (*this);
      }

      inline IVector3D& operator=(const IVector3D& v) {
        x_ = v.x_;
        y_ = v.y_;
        z_ = v.z_;

        return (*this);
      }

      inline IVector3D& operator=(const int32_t& v) {
        x_ = v;
        y_ = v;
        z_ = v;

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
  };
}

#endif