# Math 4610 Software Manual File

**Routine Name:** conjGrad

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ conjGrad.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o conjGrad conjGrad.cpp

**Description/Purpose:** This method solves a system of linear equations that can be expressed as a positive definite matrix. It is solved by minimizing a quadradic equation defined by the matrix.

**Input:** As input, this function needs a symmetric positive definite matrix `A` and it's solution vector `b`.

**Output:** This method will output a solution vector `x` that satisfies `Ax=b` within a tolerance level.

**Usage/Example:**



**Implementation/Code:** The following is the code for conjGrad



**Last Modified:** November 2019
