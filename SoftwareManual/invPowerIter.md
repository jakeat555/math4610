# Math 4610 Software Manual File

**Routine Name:** invPowerIter

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ invPowerIter.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o invPowerIter invPowerIter.cpp

**Description/Purpose:** This method theoreticlly takes sucessive inverses of a square matrix `A-pI` where `p` is an intial eigen value guess (a shift), and `I` is the identity matrix. It then uses thier sucessive multiplications with a vector to estimate an eigen vector. In practice this is done by normalizing the product of the next best approximation vector and `A-pI`. 

**Input:** As input, this method needs a square `nxn` matrix `A` and an intial guess of an eigen vector `v` and an intial shift value `p`.

**Output:** This code outputs the smallest (in magnitude) eigen value and its corresponding eigen vector.

**Usage/Example:**



**Implementation/Code:** The following is the code for invPowerIter



**Last Modified:** November 2019
