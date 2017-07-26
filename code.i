%module code
%{
#include "code.h"
%}
%include "std_vector.i"
namespace std {
  /* define types, order matters, names don't */
  %template(VecDouble) vector<double>;
  %template(VecVecdouble) vector< vector<double> >;
}

%include "code.h"
