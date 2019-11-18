#include "Square.hh"

#include <iostream>

//----------------------------------------------------------------------------//
Square::Square(const double side)
  : Rectangle(side, side)
{
  std::cout << ">>>making a square" << std::endl;
}

