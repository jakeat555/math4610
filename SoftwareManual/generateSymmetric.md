# Math 4610 Software Manual File

**Routine Name:** generateSymmetric

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ generateSymmetric.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o generateSymmetric generateSymmetric.cpp

**Description/Purpose:** This method outputs a symmetric matrix that has been filled with uniformly random numbers from 0 up to 1.

**Input:** The input of this method is a size `n` that the square symmetric matrix is to be.

**Output:** The output of this function is a symmetric matrix, randomly filled with values.

**Usage/Example:** This is what is output when the method is used to make a `3x3` symmetric matrix.
```
0.040230        0.690001        0.505418
0.690001        0.554785        0.378429
0.505418        0.378429        0.207382
```


**Implementation/Code:** The following is the code for generateSymmetric
```
void generateSymmetric(double A[][4], int n){
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
