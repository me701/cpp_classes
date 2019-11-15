#include "Point.hh"

#include <cassert>

//----------------------------------------------------------------------------//
Point::Point(const double xval, const double yval)
  :  _x(xval), _y(yval)
{
  /* i usually put a place holder... */
}

//----------------------------------------------------------------------------//
double Point::x() const
{
  return _x;
}

//----------------------------------------------------------------------------//
double Point::y() const
{
  return _y;
}

//----------------------------------------------------------------------------//
const double& Point::operator[](const unsigned dim) const
{
  assert(dim <= 1); // defensive programming!
  return dim == 0 ? _x : _y;
}

//----------------------------------------------------------------------------//
double& Point::operator[](const unsigned dim)
{
  assert(dim <= 1);
  return dim == 0 ? _x : _y;
}

//----------------------------------------------------------------------------//
std::ostream& operator<< (std::ostream &out, const Point &p)
{
  std::ios::fmtflags f(out.flags());
  out.setf(std::ios::fixed, std::ios::floatfield);
  out.setf(std::ios::showpoint);
  out << "(" << p.x() << ", " << p.y() << ")";
  out.flags(f);
  return out;
}
