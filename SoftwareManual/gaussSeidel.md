# Math 4610 Software Manual File

**Routine Name:** gaussSeidel

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ gaussSeidel

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o gaussSeidel gaussSeidel.cpp

**Description/Purpose:** This method is used to solve a system of linear equations that can be expressed in diagonally dominant or symmetric forms.

**Input:** The input of this function is a diagonally dominant, or symmetric matrix `A` of size `nxn` and solution vector `b`.

**Output:** This function outputs a vector `x` that is the solution to `Ax=b`.

**Usage/Example:** We can use this method to compute the solution to a set of equations given by the matrix `A = {10,-1,2,0} , {-1,11,-1,3} , {2,-1,10,-1} , {0,3,-1,8}` and solution vector `b = {6,25,-11,15}`. This will output
```
Iteration 0, x = <0.600000,2.327273,-0.987273,0.878864> 7.523307
Iteration 1, x = <1.030182,2.036938,-1.014456,0.984341> 0.281215
Iteration 2, x = <1.006585,2.003555,-1.002527,0.998351> 0.002010
Iteration 3, x = <1.000861,2.000298,-1.000307,0.999850> 0.000051
Iteration 4, x = <1.000091,2.000021,-1.000031,0.999988> 0.000001
```



**Implementation/Code:** The following is the code for gaussSeidel
```
void gaussSeidelIter(double A[][4], double xOld[], double b[], double tol,int maxIter, int n){
	double xNew[n] = {xOld[0],xOld[1],xOld[2],xOld[3]};
	double error = 10*tol;
	int iter = 0;
	while(error > tol && iter < maxIter){
		for(int i=0; i<n; i++){
			double phi = 0.0;
			for(int j= 0; j< i; j++){
				phi -= A[i][j]*xNew[j];
			}
			for(int j = i+1; j<n; j++){
				phi -= A[i][j]*xOld[j];
			}
			xNew[i] = (b[i]+phi)/A[i][i];
		}
		// that is one iteration of the Gauss, now compute an error
		error = 0.0;
		for(int i=0; i<n; i++){
			double diff = xNew[i]-xOld[i];
			error += diff*diff;
			xOld[i] = xNew[i];
		}
		// post processing functions
		printf("Iteration %d, x = <%f,%f,%f,%f> %f\n",iter,xNew[0],xNew[1],xNew[2],xNew[3],error);
		iter++;
	}
}
```


**Last Modified:** November 2019
