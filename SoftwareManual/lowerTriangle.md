# Math 4610 Software Manual File

**Routine Name:** lowerTriangle

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ lowerTriangle.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o lowerTriangle lowerTriangle.cpp

**Description/Purpose:** This method analyzes a square lower triangle matrix (entries above the main diagonal are zero) and finds the solution that, when matrix multiplied, produces a targeted vector.

**Input:** This method needs a `(nxn)` matrix `A` and a vector to solve for `b` (of length `n`).

**Output:** This method outputs a vector that is the solution to the system of equations set up by `A.x=b`

**Usage/Example:** Using with a test matrix `A[][3] = { {3,0,0} , {0.01,4.5,0} , {5,2.1,9}}` and solution vector `b[] = {9.1,4,1.2};` we get the output
```
        3.033333
x:      0.882148
        -1.747686
```



**Implementation/Code:** The following is the code for lowerTriangle
```
void lowerTriangle(double A[][3], double x[], double b[],int n){
	x[0]=b[0]/A[0][0];
	for(int i=1; i<n; i++){
		double sum = b[i];
		for(int j=0; j<i; j++){
			sum -= A[i][j]*x[j];
		}
		x[i] = sum/A[i][i];
	}
}
```


**Last Modified:** November 2019
