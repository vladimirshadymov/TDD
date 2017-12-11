#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

//template <typename T>
class vector3d {
 public:
  static vector3d X;
  static vector3d Y;
  static vector3d Z;
  static vector3d ZERO;


  double x, y, z;



  vector3d();
  vector3d(double x_coor, double y_coor, double z_coor);

  //поддержка векторного сложения и вычитания;
  vector3d operator+(const vector3d v);
  vector3d operator-(const vector3d v);

  //поддержка операций проверки равенства и неравенства;
  ///bool operator==(const vector3d v);
  bool operator!=(const vector3d v);

  //поддержка векторного умножения;
  vector3d operator^(vector3d v);

  //поддержка скалярного умножения;
  double operator*(const vector3d v);

  //поддержка операции умножения на скаляр;
  vector3d operator*(double k);

  //наличие метода для вычисления длины;
  double length();

  //наличие метода для нормализации;
  void normalize();

  //наличие перегруженного оператора для вывода в std::ostream.



  vector3d operator-();
};
vector3d operator*(const double k, const vector3d v);

bool operator==(const vector3d &v1, const vector3d &v2);

std::ostream& operator<<(std::ostream &os, const vector3d &v);


#endif