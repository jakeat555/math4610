# Math 4610 Software Manual File

**Routine Name:** generateSquare

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ generateSquare.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o generateSquare generateSquare.cpp

**Description/Purpose:** This method outputs a square matrix that has been filled with uniformly random numbers.

**Input:** The input of this method is a size `n` that the square matrix is to be.

**Output:** The output of this function is a square matrix, randomly filled with values from 0 up to 1.

**Usage/Example:** With parameter `n=3`, you get the matrix
```
0.350015        0.921262        0.796501
0.040906        0.909443        0.567978
0.502482        0.490579        0.334239
```
But, with a diffrent seed time (run again), a diffrent matrix is produced
```
0.000000        0.690001        0.505418
0.591491        0.554785        0.378429
0.257732        0.207382        0.626262
```


**Implementation/Code:** The following is the code for generateSquare
```
void generateSquare(double A[][3], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			A[i][j] = double(rand()) / (double(RAND_MAX) + 1.0);
		}
	}
}
```



**Last Modified:** November 2019
