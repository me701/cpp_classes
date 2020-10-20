#ifndef SP_HH_
#define SP_HH_

#include "SPref.hh"

/**
 *  A very bare bones "smart" pointer with absolutely no error checking.
 *
 *  We'll compare SP<T> to std::shared_ptr<T> in the demo.
 *
 * The basic idea of this class is that it
 *   1. stores a pointer of type T*
 *   2. keeps track of how many copes of itself are made.
 * When the final copy deconstructs, the stored pointer can be freed since
 * we assume the original SP *owned* the pointer.
 */
template <class T>
class SP
{

public:

  /// Default constructor.
  SP() : p(0), r(new SPref) { Ensure (r); Ensure (r->refs() == 1); }

  /// Explicit constructor for type T *.
  SP(T* dp);

  // Explicit constructor for type X *.
  template <class X>
  inline explicit SP(X *px_in);

  // Copy constructor for SP<T>.
  inline SP(const SP<T> &sp_in);

  // Copy constructor for SP<X>.
  template<class X>
  inline SP(const SP<X> &spx_in);

  /// Destructor, memory is released when count goes to zero.
  ~SP() { free(); }

  // Assignment operator for type T *.
  inline SP<T>& operator=(T *p_in);

  // Assignment operator for type X *.
  template<class X>
  inline SP<T>& operator=(X *px_in);

  // Assignment operator for type SP<T>.
  inline SP<T>& operator=(const SP<T> sp_in);

  // Assignment operator for type SP<X>.
  template<class X>
  inline SP<T>& operator=(const SP<X> spx_in);

  /// Access operator.
  T* operator->() const
  {
    return d_p;
  }

  /// Dereference operator.
  T& operator*() const
  {
    return *d_p;
  }

  /// Get the dumb pointer.
  T* p() const { return d_p; }

  /// Boolean conversion operator.
  operator bool() const { return d_p != 0; }

  /// Operator not.
  bool operator!() const { return d_p == 0; }

  /// Equality operator for T*.
  bool operator==(const T *p_in) const { return d_p == p_in; }

  /// Inequality operator for T*.
  bool operator!=(const T *p_in) const { return d_p != p_in; }

  /// Equality operator for SP<T>.
  bool operator==(const SP<T> &sp_in) const { return d_p == sp_in.p(); }

  /// Inequality operator for SP<T>.
  bool operator!=(const SP<T> &sp_in) const { return d_p != sp_in.p(); }

private:

  /// Dumb pointer held by smart pointer.
  T *d_p;

  /// Pointer to reference counter.
  SPref *r;

};

#endif // SP_HH_
