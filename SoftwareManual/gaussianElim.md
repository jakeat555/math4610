# Math 4610 Software Manual File

**Routine Name:** gaussianElim

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ gaussianElim.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o gaussianElim gaussianElim.cpp

**Description/Purpose:** This method first transforms the given matrix into upper triangle form using row elimination. Then, the resulting matrix is solved using the [Upper Triangle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/upperTriangle.md) solver.

**Input:** As input, this method needs a matrix and a vector to solve for.

**Output:** The output of this function is a vector that is the solution to the linear equations deinfed by the matrix and given vector.

**Usage/Example:**



**Implementation/Code:** The following is the code for gaussianElim



**Last Modified:** November 2019
