#include "vector3d.hpp"

#include <cmath>
//template <typename T>
vector3d vector3d::X = {1.0, 0.0, 0.0};
vector3d vector3d::Y = {0.0, 1.0, 0.0};
vector3d vector3d::Z = {0.0, 0.0, 1.0};
vector3d vector3d::ZERO = {0.0, 0.0, 0.0};

//template <typename T>
vector3d::vector3d() {
  double zero = 0;
  x=zero;
  y=zero;
  z=zero;
}
//template <typename T>
vector3d::vector3d(double x_coor, double y_coor, double z_coor) {
  x = x_coor;
  y = y_coor;
  z = z_coor;
}

//template <typename T>
vector3d vector3d::operator + (const vector3d v){
  double tmp_x = x+v.x;
  double tmp_y = y+v.y;
  double tmp_z = z+v.z;
  vector3d tmp(tmp_x,tmp_y,tmp_z);
  return tmp;
}

//template <typename T>
vector3d vector3d::operator-(const vector3d v) {
  double tmp_x = x-v.x;
  double tmp_y = y-v.y;
  double tmp_z = z-v.z;
  vector3d tmp(tmp_x,tmp_y,tmp_z);
  return tmp;
}

//template <typename T>
/*!
bool vector3d::operator==(const vector3d v) {
  return ((x==v.x) and (y==v.y) and (z==v.z));
}
!*/

//template <typename T>
bool vector3d::operator!=(vector3d v) {
  return not((x==v.x) and (y==v.y) and (z==v.z));
}

//template <typename T>
double vector3d::operator*(vector3d v) {
  return (x*v.x+y*v.y+z*v.z);
}

//template <typename T>
vector3d vector3d::operator*(double k) {
  double x_tmp = k*x;
  double y_tmp = k*y;
  double z_tmp = k*z;
  vector3d tmp(x_tmp, y_tmp, z_tmp);
  return tmp;

}

//template <typename T>
vector3d operator*(double k,  vector3d v){
  double x_tmp = k*v.x;
  double y_tmp = k*v.y;
  double z_tmp = k*v.z;
  vector3d tmp(x_tmp, y_tmp, z_tmp);
  return tmp;
}

//template <typename T>
void vector3d::normalize() {
  double len = sqrt(x*x+y*y+z*z);
  x/=len;
  y/=len;
  z/=len;
}

//template <typename T>
vector3d vector3d::operator-() {
  double x_tmp = -x;
  double y_tmp = -y;
  double z_tmp = -z;
  vector3d tmp(x_tmp, y_tmp, z_tmp);
  return tmp;
}

//template <typename T>
double vector3d::length() {
  return sqrt(x*x+y*y+z*z);
}


//template <typename T>
std::ostream& operator<<(std::ostream &os, const vector3d &v) {
  os << "{"<< v.x << ", "<< v.y << ", "<< v.z << "}";
  return os;
}

//template <typename T>
vector3d vector3d::operator^(vector3d v) {
  double x_tmp=y*v.z-z*v.y;
  double y_tmp=z*v.x-x*v.z;
  double z_tmp=x*v.y-y*v.x;
  vector3d tmp(x_tmp, y_tmp, z_tmp);
  return tmp;
}

bool operator==(const vector3d &v1, const vector3d &v2){
  return ((v1.x==v2.x) and (v1.y==v2.y) and (v1.z==v2.z));
}
