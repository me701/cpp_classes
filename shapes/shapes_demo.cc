#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

#include "Parallelogram.hh"
#include "Rectangle.hh"
#include "Square.hh"
//#include "shape_utilities.hh"

int main(int argc, char* argv[])
{

  std::cout << "------" << std::endl;
//  Parallelogram P(1, 2, M_PI/2);
//  std::cout << P.area() << std::endl;
//  std::cout << &P << std::endl;
  std::cout << "------" << std::endl;
  Rectangle R(1, 2);
  std::cout << R.area() << std::endl;
  std::cout << &R << std::endl;
  std::cout << "------" << std::endl;
  Square S(2);
  std::cout << S.area() << std::endl;
  std::cout << &S << std::endl;


  // Polymorphism

  return 0;
}


