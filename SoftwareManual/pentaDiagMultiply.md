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

**Input:** The method needs as input a pentadiagonal matrix `A` that is split into 5 vectors `a,b,c,d,e`, and a scalar vector `x`

**Output:** This method returns a solution vector `y` which is the product `Ax`.

**Usage/Example:** This method was tested using the matrix
```
3	6	4	0	0	0	0	0
4	6	1	62	0	0	0	0
3	4	8	4	4	0	0	0
0	8	6	2	8	3	0	0
0	0	5	8	4	5	1	0
0	0	0	9	2	2	32	9
0	0	0	0	2	9	6	3
0	0	0	0	0	4	3	9
```
but was split into vectors `a = <3,8,5,9,2,4>` and ` b = <4,4,6,8,2,9,3>` and `c = <3,6,8,2,4,2,6,9>` and `d = <6,1,4,8,5,32,3>` and `e = <4,62,4,3,1,9>`. And was multiplied by vector `x = <3,1,6,7,3,2,4,9>` to get the result
```
y: <39.000000,458.000000,101.000000,88.000000,112.000000,282.000000,75.000000,101.000000>
```



**Implementation/Code:** The following is the code for pentaDiagMultiply
```
void pentaDiagMultiply(double a[], double b[], double c[], double d[], double e[], double x[], double y[], int n){
	//a and e both have n-1 elements
	//b and d both have n-2 elements

	y[0] = c[0]*x[0] + d[0]*x[1] + e[0]*x[2];
	y[1] = b[0]*x[0] + c[1]*x[1] + d[1]*x[2] + e[1]*x[3];
	for(int i=2; i < n-2; i++){
		y[i] = a[i-2]*x[i-2] + b[i-1]*x[i-1] + c[i]*x[i] + d[i]*x[i+1] + e[i]*x[i+2];
	}
	y[n-2] = a[n-4]*x[n-4] + b[n-3]*x[n-3] + c[n-2]*x[n-2] + d[n-2]*x[n-1];
	y[n-1] = a[n-3]*x[n-3] + b[n-2]*x[n-2] + c[n-1]*x[n-1];
}
```
**Last Modified:** November 2019
