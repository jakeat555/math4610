# Math 4610 Software Manual File

**Routine Name:** generateDiagDom

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ generateDiagDom.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o generateDiagDom generateDiagDom.cpp

**Description/Purpose:** This method outputs a diagonally dominant matrix that has been filled with uniformly random numbers from 0 up to 1.

**Input:** The input of this method is a row and column size `n` that the diagonally dominant matrix is to be.

**Output:** The output of this function is a `nxn` diagonally dominant matrix, randomly filled with values except the diagonal entries, which are randomly generated, then `n` is added to it (to make it diagonally dominant).

**Usage/Example:** This is when the function was use to find a `3x3` matrix that is diagonally dominant.
```
3.390032        0.967939        0.173655
0.453616        3.087746        0.636831
0.696883        0.192656        3.756080
```



**Implementation/Code:** The following is the code for generateDiagDom
```
void generateDiagDom(double A[][3], int n){
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			A[i][j] = double(rand()) / (double(RAND_MAX) + 1.0);
		}
		A[i][i] += n;
	}
}
```


**Last Modified:** November 2019
