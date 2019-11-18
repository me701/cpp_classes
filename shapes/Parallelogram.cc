#include "Parallelogram.hh"

#include <iostream>
#include <cmath>

//----------------------------------------------------------------------------//
Parallelogram::Parallelogram(const double side1, 
                             const double side2, 
                             const double small_angle)
  : _side1(side1),
    _side2(side2),
    _small_angle(small_angle)
{
  std::cout << ">>>making a parallelogram" << std::endl;
}

//----------------------------------------------------------------------------//
double Parallelogram::area() const
{
  std::cout << ">>>parallelogram area!!!" << std::endl;  
  return std::sin(this->_small_angle)*this->_side1*this->_side2;
}


//----------------------------------------------------------------------------//
std::ostream& operator<< (std::ostream &out, Parallelogram *p)
{
  out << "**** I am a " << p->name();
  return out;
}
