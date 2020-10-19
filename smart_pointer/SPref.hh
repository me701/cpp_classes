#ifndef SP_REF_HH_
#define SP_REF_HH_


// Reference counter
class SPref
{

public:

  /// Constructor
  SPref(int r = 1) : d_refs(r) {}

  /// Return the reference count
  int refs() const
  {
    return d_refs;
  }

  /// Increment the reference count
  void increment()
  {
      d_refs++;
  }

  /// Decrement the reference count
  void decrement()
  {
      d_refs--;
  }

private:

  /// Number of references.
  int d_refs;
};

#endif // SP_REF_HH_
