#include "Rectangle.hh"

#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

//----------------------------------------------------------------------------//
Rectangle::Rectangle(const double side1, 
                     const double side2)
  : Parallelogram(side1, side2, M_PI/2)
{
  std::cout << ">>>making a rectangle" << std::endl;
}

//----------------------------------------------------------------------------//
void Rectangle::some_pure_virtual_method() const
{
  std::cout << "okay, I implemented it now!" << std::endl;
}
