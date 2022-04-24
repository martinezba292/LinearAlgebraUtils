#ifndef __Vector3D_H__
#define __Vector3D_H__ 1

#include <math.h>
#include <stdint.h>

namespace lau {
  class Vector3D {
    public:
      Vector3D();
      Vector3D(const Vector3D& v);
      Vector3D(const float& x, const float& y, const float& z);
      Vector3D(const float& v);
      ~Vector3D();
      


    public:
      inline float dot(const Vector3D& v) const {
        return (x_ * v.x_ + y_ * v.y_ + z_ * v.z_);
      }

      inline Vector3D cross(const Vector3D& v) const {
        return Vector3D(y_ * v.z_ - z_ * v.y_, 
                        z_ * v.x_ - x_ * v.z_,
                        x_ * v.y_ - y_ * v.x_);
      }

      inline float module() const {
        return sqrtf(dot(*this));
      }
      

      inline Vector3D normalized() const {
        return (Vector3D((*this) / module()));
      }


    public:
      inline Vector3D operator+(const Vector3D& v) {
        return Vector3D(x_ + v.x_, y_ + v.y_, z_ + v.z_);
      }

      inline Vector3D operator+(const Vector3D& v) const {
        return Vector3D(x_ + v.x_, y_ + v.y_, z_ + v.z_);
      }


      inline Vector3D operator+(const float& v) {
        return Vector3D(x_ + v, y_ + v, z_ + v);
      }

      inline Vector3D operator+(const float& v) const {
        return Vector3D(x_ + v, y_ + v, z_ + v);
      }


      inline Vector3D operator-(const Vector3D& v) {
        return Vector3D(x_ - v.x_, y_ - v.y_, z_ - v.z_);
      }

      inline Vector3D operator-(const Vector3D& v) const {
        return Vector3D(x_ - v.x_, y_ - v.y_, z_ - v.z_);
      }


      inline Vector3D operator-(const float& v) {
        return Vector3D(x_ - v, y_ - v, z_ - v);
      }

      inline Vector3D operator-(const float& v) const {
        return Vector3D(x_ - v, y_ - v, z_ - v);
      }

      inline Vector3D operator-() {
        return Vector3D(-x_, -y_, -z_);
      }

      inline Vector3D operator-() const {
        return Vector3D(-x_, -y_, -z_);
      }


      inline Vector3D operator*(const Vector3D& v) {
        return Vector3D(x_ * v.x_, y_ * v.y_, z_ * v.z_);
      }

      inline Vector3D operator*(const Vector3D& v) const {
        return Vector3D(x_ * v.x_, y_ * v.y_, z_ * v.z_);
      }


      inline Vector3D operator*(const float& v) {
        return Vector3D(x_ * v, y_ * v, z_ * v);
      }

      inline Vector3D operator*(const float& v) const {
        return Vector3D(x_ * v, y_ * v, z_ * v);
      }


      inline Vector3D operator/(const Vector3D& v) {
        return Vector3D(x_ / v.x_, y_ / v.y_, z_ / v.z_);
      }

      inline Vector3D operator/(const Vector3D& v) const {
        return Vector3D(x_ / v.x_, y_ / v.y_, z_ / v.z_);
      }


      inline Vector3D operator/(const float& v){
        float s = 1.0f / v;
        return Vector3D(x_ * s, y_ * s, z_ * s);
      }

      inline Vector3D operator/(const float& v) const {
        float s = 1.0f / v;
        return Vector3D(x_ * s, y_ * s, z_ * s);
      }




    public:
      inline Vector3D& operator+=(const Vector3D& v) {
        x_ += v.x_;
        y_ += v.y_;
        z_ += v.z_;

        return (*this);
      }

      inline Vector3D& operator-=(const Vector3D& v) {
        x_ -= v.x_;
        y_ -= v.y_;
        z_ -= v.z_;

        return (*this);
      }

      inline Vector3D& operator*=(const Vector3D& v) {
        x_ *= v.x_;
        y_ *= v.y_;
        z_ *= v.z_;

        return (*this);
      }

      inline Vector3D& operator/=(const Vector3D& v) {
        x_ /= v.x_;
        y_ /= v.y_;
        z_ /= v.z_;

        return (*this);
      }

      inline Vector3D& operator+=(const float& v) {
        x_ += v;
        y_ += v;
        z_ += v;

        return (*this);
      }

      inline Vector3D& operator-=(const float& v) {
        x_ -= v;
        y_ -= v;
        z_ -= v;

        return (*this);
      }

      inline Vector3D& operator*=(const float& v) {
        x_ *= v;
        y_ *= v;
        z_ *= v;

        return (*this);
      }

      inline Vector3D& operator/=(const float& v) {
        float s = 1.0f / v;
        x_ *= s;
        y_ *= s;
        z_ *= s;

        return (*this);
      }

      inline Vector3D& operator=(const Vector3D& v) {
        x_ = v.x_;
        y_ = v.y_;
        z_ = v.z_;

        return (*this);
      }

      inline Vector3D& operator=(const float& v) {
        x_ = v;
        y_ = v;
        z_ = v;

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
  };
}

#endif