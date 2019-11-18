#ifndef square_hh
#define square_hh

#include "Rectangle.hh"

class Square : public Rectangle
{

  public:

    Square(const double side);

    // No need to redeclare area, since Parallelogram defined it

    virtual std::string name() const
    {
      return "Square";
    }


    // No need to redefine some_pure_virtual_method since Rectangle did it 

};


#endif // square_hh
