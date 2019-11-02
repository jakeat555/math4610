# Math 4610 Software Manual File

**Routine Name:** LUFactor

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ LUFactor

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o LUFactor LUFactor.cpp

**Description/Purpose:** This method is one that helps solve linear systems by converting a square matrix into a product of two matrices. These secondary matrices are of [Lower Triangle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/lowerTriangle.md) form and [Upper Trinagle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/upperTriangle.md) form.

**Input:** This method takes as input a square n by n matrix `A`

**Output:** The output of this function is two matrices, one in lower triangle form and the other in upper.

**Usage/Example:**



**Implementation/Code:** The following is the code for LUFactor



**Last Modified:** November 2019
