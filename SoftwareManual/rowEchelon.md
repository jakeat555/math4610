# Math 4610 Software Manual File

**Routine Name:** rowEchelon

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ rowEchelon.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o rowEchelon rowEchelon.cpp

**Description/Purpose:** This method transforms a matrix into that with form of row echelon. This means that the rows with all zeros are below those with other values and that pivot (leading coeffecient) of a non-zero row is to the left of the pivot in the row below it. 

**Input:** The input for this method is a rectangular matrix `(mxn)`

**Output:** The output for this methos is a rectangluar matrix `(mxn)` that is in row echelon form.

**Usage/Example:**



**Implementation/Code:** The following is the code for rowEchelon



**Last Modified:** November 2019
