# Math 4610 Software Manual File

**Routine Name:** triDiagMultiply

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ triDiagMultiply.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o triDiagMultiply triDiagMultiply.cpp

**Description/Purpose:** This method does a matrix multiply operation on a tridiagonal matrix, and is optimized to do so

**Input:** The method needs as input a tridiagonal matrix `A`, and a scalar vector `x`

**Output:** This method returns a solution vector `b` which is the product `Ax`.

**Usage/Example:** Using this method on the matrix
```
4   5   0   0   0
3   3   1   0   0
0   5   8   82  0
0   0   9   4   9
0   0   0   1   32
```
but split into vectors `sub = <3,5,9,1>` and `main = <4,3,8,4,32>` and `super = <5,1,82,9>`. The matrix was multiplied by `x = <3,9,2,8,7>` to get 
```
b: <57.000000,38.000000,717.000000,113.000000,232.000000>
```

**Implementation/Code:** The following is the code for triDiagMultiply
```
void triDiagMultiply(double sub[], double main[], double super[], double x[], double b[], int n){
	//daigSub and diagSuper both have n-1 elements
	b[0] = main[0]*x[0] + super[0]*x[1];
	for(int i=0; i < n-1 ; i++){
		b[i] = sub[i-1]*x[i-1] + main[i]*x[i] + super[i]*x[i+1];
	}
    b[n-1] = sub[n-2]*x[n-2] + main[n-1]*x[n-1];
}
```

**Last Modified:** November 2019
