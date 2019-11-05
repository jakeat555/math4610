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

**Usage/Example:** Using with a test matrix `A[][3] = { {5,2.1,9} , {.01,4.5,3.1} , {3,2.7,5.5}}` and solution vector `b[] = {3,5,2.1};` we get the output
```
        -2.081534
x:      0.106606
        1.464866
```



**Implementation/Code:** The following is the code for gaussianElim
```
void gaussianElim(double A[][3], double x[], double b[],int n){
	for(int k=0; k<n-1;k++){
		for(int i=k+1; i<n; i++){
			double factor = A[i][k] / A[k][k];
			for(int j=k+1;j<n; j++){
				A[i][j] = A[i][j] - factor*A[k][j];	
			}
			b[i] -= factor*b[k];
		}
	}
    x[n-1]=b[n-1]/A[n-1][n-1];
	for(int i=n-1; i>=0; i--){
		double sum = b[i];
		for(int j=i+1; j<n; j++){
			sum -= A[i][j]*x[j];
		}
		x[i] = sum/A[i][i];
	}
}
```


**Last Modified:** November 2019
