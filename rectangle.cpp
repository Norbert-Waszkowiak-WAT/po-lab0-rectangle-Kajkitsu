#include <iostream>

class Rectangle {
 private:
  double width;
  double height;
 public:
  Rectangle(double w, double h): width(w), height(h) {}

  void setWidth(double w) {
    width = w;
  }

  double perimeter() const {
    return 2 * (width + height);
  }

  double getWidth() const {
   return width;
  }
};