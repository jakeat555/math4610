# Math 4610 Software Manual File

**Routine Name:** pentaDiagMultiply

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ pentaDiagMultiply.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o pentaDiagMultiply triDiagMultiply.cpp

**Description/Purpose:** This method does a matrix multiply operation on a pentadiagonal matrix (a matrix with 5 full diagonal entries and empty elsewhere), and is optimized to do so.

**Input:** The method needs as input a pentadiagonal matrix `A` that is split into 5 vectors `a1,a2,a3,a4,a5`, and a scalar vector `x`

**Output:** This method returns a solution vector which is the product `Ax`.

**Usage/Example:**



**Implementation/Code:** The following is the code for pentaDiagMultiply



**Last Modified:** November 2019
