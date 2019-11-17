# Math 4610 Software Manual File

**Routine Name:** generateSymmetricDiagDom

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ generateSymmetricDiagDom.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o generateSymmetricDiagDom generateSymmetricDiagDom.cpp

**Description/Purpose:** This method outputs a square, symmetric, diagonally dominant matrix that has been filled with uniformly random numbers.

**Input:** The input of this method is a size `n` that the square, symmetric, diagonally dominant matrix is to be.

**Output:** The output of this function is a square, symmetric, diagonally dominant matrix, randomly filled with values.

**Usage/Example:** The following is output when the function is used to make a `4x4` diagonally dominant symmetric matrix.
```
4.123641        0.029163        0.520104        0.270973
0.029163        4.717334        0.840049        0.221663
0.520104        0.840049        4.908358        0.314550
0.270973        0.221663        0.314550        4.289440
```


**Implementation/Code:** The following is the code for generateSymmetricDiagDom
```
void generateDiagDomSymmetric(double A[][4], int n){
	for(int i=0; i<n;i++){
		for(int j=i; j<n; j++){
			A[i][j] = double(rand()) / (double(RAND_MAX) + 1.0);
			A[j][i] = A[i][j];
		}
		A[i][i] += n;
	}
}
```


**Last Modified:** November 2019
