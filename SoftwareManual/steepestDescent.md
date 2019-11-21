# Math 4610 Software Manual File

**Routine Name:** steepestDescent

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ steepestDescent.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o steepestDescent steepestDescent.cpp

**Description/Purpose:** This method uses the steepest descent method to solve a set of linear equations. This is implemented by finding and going perpendicular to the level curve that the current approximation is on.

**Input:** As input, this function needs a matrix `A` and it's solution vector `b`.

**Output:** This method will output a solution vector `x` that satisfies `Ax=b` within a tolerance level.

**Usage/Example:**



**Implementation/Code:** The following is the code for steepestDescent



**Last Modified:** November 2019
