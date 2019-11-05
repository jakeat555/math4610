# Math 4610 Software Manual File

**Routine Name:** upperTriangle

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ upperTriangle.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o upperTriangle upperTriangle.cpp

**Description/Purpose:** This method analyzes a square upper triangle matrix (entries below the main diagonal are zero) and finds the solution that, when matrix multiplied, produces a targeted vector.

**Input:** This method needs a `(nxn)` matrix `A` and a vector to solve for `b` (of length `n`).

**Output:** This method outputs a vector that is the solution to the system of equations set up by `A.x=b`

**Usage/Example:** Using with a test matrix `A[][3] = { {3,1,1} , {0,4.5,1} , {0,0,9}}` and solution vector `b[] = {3,5,2.1};` we get the output
```
        0.491358
x:      1.059259
        0.233333
```



**Implementation/Code:** The following is the code for upperTriangle
```
void upperTriangle(double A[][3], double x[], double b[],int n){
	x[n-1]=b[n-1]/A[n-1][n-1];
	for(int i=n-2; i>=0; i--){
		double sum = b[i];
		for(int j=i+1; j<n; j++){
			sum -= A[i][j]*x[j];
		}
		x[i] = sum/A[i][i];
	}
}
```


**Last Modified:** November 2019
