# Math 4610 Software Manual File

**Routine Name:** upperTriangle

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ upperTriangle.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o upperTriangle upperTriangle.cpp

**Description/Purpose:** This method analyzes a square upper triangle matrix (entries below the main diagonal are zero) and finds the solution that, when matrix multiplied, produces a targeted vector.

**Input:** This method needs a `(nxn)` matrix `A` and a vector to solve for `b` (of length `n`).

**Output:** This method outputs a vector that is the solution to the system of equations set up by `A.x=b`

**Usage/Example:**



**Implementation/Code:** The following is the code for upperTriangle



**Last Modified:** November 2019