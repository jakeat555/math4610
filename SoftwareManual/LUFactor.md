# Math 4610 Software Manual File

**Routine Name:** LUFactor

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ LUFactor

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o LUFactor LUFactor.cpp

**Description/Purpose:** This method is one that helps solve linear systems by converting a square matrix into a product of two matrices. These secondary matrices are of [Lower Triangle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/lowerTriangle.md) form and [Upper Trinagle](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/upperTriangle.md) form, but are juxtaposed and mashed into one matrix, with the lower triangle diagonal containing all 1s.

**Input:** This method takes as input a square n by n matrix `A`

**Output:** The output of this function is the data of two matrices, one in lower triangle form (with ones in the diagonal) and the other in upper but mashed together.

**Usage/Example:** This method was tested using the marix `A[3][3] = {{-2,4,7} , {-1,-9,-5} , {4,3,-5}}` and its output was
```
-2.000000       4.000000        7.000000
0.500000        -11.000000      -8.500000
-2.000000       -1.000000       0.500000
```



**Implementation/Code:** The following is the code for LUFactor
```
void LUFactor(double A[][3],int n){
	for(int k=0;k<n;k++){
		for(int j=k;j<n;j++){
			double sum=0.0;
			for(int p=0;p<k;p++){
				sum+=A[k][p]*A[p][j];
			}
			A[k][j]=(A[k][j]-sum);
		}
		for(int i=k+1;i<n;++i){
			double sum=0.;
			for(int p=0;p<k;++p){
				sum+=A[i][p]*A[p][k];
			}
			A[i][k]=(A[i][k]-sum)/A[k][k];
		}
   }
}
```


**Last Modified:** November 2019
