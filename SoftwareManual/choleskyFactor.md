# Math 4610 Software Manual File

**Routine Name:** choleskyFactor

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ choleskyFactor.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o choleskyFactor choleskyFactor.cpp

**Description/Purpose:** This takes in a matrix and will output its Choleskian factorization, which defined to be the product of two other matrices, `L` and `L*`, where `L` is a lower triangle and `L*` is the congugate transpose of `L`.

**Input:** This method takes in a positive definite matrix `A`

**Output:** The output of this function is two matrices, `L`, a [lower Triangle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/lowerTriangle.md) and `L*`, the congugate transpose of `L`.

**Usage/Example:**



**Implementation/Code:** The following is the code for choleskyFactor



**Last Modified:** November 2019
