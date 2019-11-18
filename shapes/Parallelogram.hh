#ifndef parallelogram_hh
#define parallelogram_hh

#include <ostream>

class Parallelogram
{

  public:

    /**
     *  Constructor (declaration only).  This is usually where a developer
     *  puts all of the relevant documentation, e.g., what are xval and yval?
     */
    Parallelogram(const double side1, const double side2, const double small_angle);

    // virtual means derived classes can override this definition
    // but don't have to do so.  
    virtual double area() const;

    virtual std::string name() const
    {
      return "Parallelogram";
    }

    // virtual means derived classes can override this definition
    virtual void some_pure_virtual_method() const = 0;

  protected:

    double _side1;
    double _side2;
    double _small_angle;

}; // don't forget this semicolon!


/// Pretty print a point
std::ostream& operator<< (std::ostream &out, Parallelogram *p);


#endif // parallelogram_hh
