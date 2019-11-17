# Math 4610 Software Manual File

**Routine Name:** choleskyFactor

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ choleskyFactor.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o choleskyFactor choleskyFactor.cpp

**Description/Purpose:** This takes in a matrix and will output its Choleskian factorization, which defined to be the product of two other matrices, `L` and `L*`, where `L` is a lower triangle and `L*` is the congugate transpose of `L`.

**Input:** This method takes in a positive definite matrix `A`, which is modified in the process of computation.

**Output:** The output of this function is two matrices, `L`, a [lower Triangle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/lowerTriangle.md) and `L*`, the congugate transpose of `L`. However, these two matrices are collected in a single matrix, and to futher save computational resources, that matrix is only the lower matrix `L`.

**Usage/Example:** We can use the test positive definite symmetric matrix `A = { {6,15,55} , {15,55,225} , {55,225,979} }`. This will output the matrix `A` as
```
2.449490        15.000000       55.000000
36.742346       13.038405       225.000000
134.721936      2933.641082     -2880.105364
```
Again, note that the matrix was modified but only in the lower triangle positions.



**Implementation/Code:** The following is the code for choleskyFactor
```
void choleskyFactor(double A[][3], int n){
	for(int k=0; k<n-1; k++){
		A[k][k] = sqrt(A[k][k]);
		for(int i=k+1; i<n; i++){
			A[i][k] = A[i][k] * A[k][k];
			for(int j=k+1; j<n; j++){
				A[i][i] = A[i][j]-A[j][k];
			}
		}
	}
	A[n][n] = sqrt(A[n][n]);
}
```


**Last Modified:** November 2019
