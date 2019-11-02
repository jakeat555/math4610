# Math 4610 Software Manual File

**Routine Name:** LUSolve

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ LUSolve.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o LUSolve LUSolve.cpp

**Description/Purpose:** This method takes in a matrix, then splits it into two factors as determined by [LU Factorization](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/LUFactor.md). Then, the resulting matricies are solved for a given vector,

**Input:** As input, this function takes in a square matrix and a vector to solve for.

**Output:** The output of this method is a vector that is the solution to the system of linear equations determined by the given matrix and vector.

**Usage/Example:**



**Implementation/Code:** The following is the code for LUSolve



**Last Modified:** November 2019
