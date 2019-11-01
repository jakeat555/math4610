# Math 4610 Software Manual File

**Routine Name:** crossProduct

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ crossProduct.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o crossProduct crossProduct.cpp
   
**Description/Purpose:** The cross product is a vector that is orthoginal to two other given vectors. This is only well defined for vectors in 3-space.

**Input:** The input for the cross product are two vectors, filled with doubles and are of length 3.

**Output:** The output is a vector that is perpendicular to both input vectors.

**Usage/Example:** For example, using `x= {22.3, 235, 65.4}` and `y = {29.1, 5, 6.4}` we get the output
```
Cross Product: <0.000000,1177.000000,1760.420000>
```

**Implementation/Code:** The following is the code for crossProduct
```
void crossProduct(double u[], double v[], double z[]){
	z[1] = u[1]*v[2]-u[2]*v[1];
	z[2] = u[2]*v[0]-u[0]*v[2];
	z[3] = u[0]*v[1]-u[1]*v[0];
}
```

**Last Modified:** November 2019
