// include guard
#ifndef point_hh
#define point_hh

#include <ostream>

class Point
{

  public:

    /**
     *  Constructor (declaration only).  This is usually where a developer
     *  puts all of the relevant documentation, e.g., what are xval and yval?
     */
    Point(const double xval, const double yval);

    // return x coordinate
    double x() const; // do we need the const?  what does it do?

    // blah blah
    double y() const;

    // I wonder what this does... 
    Point operator+(const Point p) const
    {
      return Point(_x+p.x(), _y+p.y());
    }

    //@{
    /// Get value for a dimension
    const double& operator[](const unsigned dim) const;
    double& operator[](const unsigned dim); // not possible with const _x, _y
    //@}

  private:

    double _x; // we *could* make these const
    double _y; // but we can do nice things without...  see operator[]

}; // don't forget this semicolon!

/// Pretty print a point
std::ostream& operator<< (std::ostream &out, const Point &p);

#endif // point_hh 
