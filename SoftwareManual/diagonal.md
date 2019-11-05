# Math 4610 Software Manual File

**Routine Name:** diagonal

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ diagonal.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o diagonal diagonal.cpp

**Description/Purpose:** This method transfroms a square matrix into a diagonal matrix, meaning that the only non zero values are on the main diagonal (where the row and column index are the same).

**Input:** This function takes a matrix `A` of size `(nxn)` that has an inverse `P` such that `PAP^{-1}` is diagonal.

**Output:** The output of this method is a matrix of size `(nxn)`

**Usage/Example:** Using with a test matrix `A[][3] = { {3,0,0} , {0,4.5,0} , {0,0,9}}` and solution vector `b[] = {3,5,2.1};` we get the output
```
        1.000000
x:      1.111111
        0.233333
```



**Implementation/Code:** The following is the code for diagonal
```
void diagonal(double A[][3], double x[], double b[], int n){
	for(int i=0; i<n; i++){
		x[i] = b[i]/A[i][i];
	}
}
```



**Last Modified:** November 2019
