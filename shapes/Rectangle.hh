#ifndef rectangle_hh
#define rectangle_hh

#include "Parallelogram.hh"

class Rectangle : public Parallelogram
{

  public:

    Rectangle(const double side1, const double side2);

    // No need to redeclare a function we don't want to override.

    // We definitelly need to define this if we want to make
    // rectangles!  Keep the virtual keyword or delete as you wish.
    virtual void some_pure_virtual_method() const;

    virtual std::string name() const
    {
      return "Rectangle";
    }


  // all the "protected" member variables of Parallelogram are
  // now private variables of Rectangle.  Think carefully about
  // what that means for Square.

};


#endif // rectangle_hh
