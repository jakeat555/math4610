# Math 4610 Software Manual File

**Routine Name:** LUSolve

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ LUSolve.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o LUSolve LUSolve.cpp

**Description/Purpose:** This method takes in a matrix, then splits it into two factors as determined by [LU Factorization](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/LUFactor.md). Then, the resulting matricies are solved for a given vector.

**Input:** As input, this function takes in a square matrix and a vector to solve for.

**Output:** The output of this method is a vector that is the solution to the system of linear equations determined by the given matrix and vector.

**Usage/Example:** Using the test sysytem of linear equations as `A= {{-2,4,7} , {-1,-9,-5} , {4,3,-5}}` and `b = {3,-2.5,-9}` we get the following output:
```
x:<-28.136364,11.181818,-14.000000>
```

**Implementation/Code:** The following is the code for LUSolve
```
void LUSolve(double A[][3], double x[], double b[],int n){
	LUFactor(A,n);
    
	for(int i=0;i<n;i++){
		double sum=0.;
		for(int k=0;k<i;++k){
			sum+=A[i][k]*y[k];
		}
		y[i]=(b[i]-sum);
	}
	for(int i=n-1;i>=0;--i){
		double sum=0.;
		for(int k=i+1;k<n;++k){
			sum+=A[i][k]*x[k];
		}
		x[i]=(y[i]-sum)/A[i][i];
	}
}
```



**Last Modified:** November 2019
