#ifndef vector_hh
#define vector_hh

class Vector:
{

  public:

    // create vector of size n
    Vector(const int n);

    // get the ith value
    double value(const int i);

    // get the number of values stored
    int size() const;

  private:

    // number of stored values
    int d_size;

    // stored values
    double* d_values;
};


#endif // vector_hh
