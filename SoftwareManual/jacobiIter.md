# Math 4610 Software Manual File

**Routine Name:** jacobiIter

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ jacobiIter.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o jacobiIter jacobiIter.cpp
    
**Description/Purpose:** This is a function that is used to find the solution of a system of equations `Ax=b` that is expressed in strictly diagonally dominant matrix form. This is theoreticlly done by rexpressing `A` as a sum of three other matrices. In this method, it is implemented through approximating `x` starting with an intital guess, iterating though matrix calculations until the error is small enough or the number of maximum desired iterations is met.

**Input:** The input of this is a `nxn` matrix `A` and solution vector `b`

**Output:** The output of this function is a solution vector `x`

**Usage/Example:** To test this, we used the strictly diagonally dominant matrix `A[][4] = { {10,-1,2,0} , {-1,11,-1,3} , {2,-1,10,-1} , {0,3,-1,8}}` and solution vector `b = {6,25,-11,15}`. This gave the output of 
```
Iteration 0, x = <0.600000,2.272727,-1.100000,1.875000>
Iteration 1, x = <1.047273,1.715909,-0.805227,0.885227>
Iteration 2, x = <0.932636,2.053306,-1.049341,1.130881>
Iteration 3, x = <1.015199,1.953696,-0.968109,0.973843>
Iteration 4, x = <0.988991,2.011415,-1.010286,1.021351>
Iteration 5, x = <1.003199,1.992241,-0.994522,0.994434>
Iteration 6, x = <0.998128,2.002307,-1.001972,1.003594>
Iteration 7, x = <1.000625,1.998670,-0.999036,0.998888>
Iteration 8, x = <0.999674,2.000448,-1.000369,1.000619>
```



**Implementation/Code:** The following is the code for jacobiIter
```
void jacobiIter(double A[][4], double xNew[], double b[], double tol,int maxIter, int n){
	double xOld[n];
	double error = 10*tol;
	int iter = 0;
	while(error > tol && iter < maxIter){
		for(int i=0; i<n; i++){
			xNew[i] = b[i];
			for(int j= 0; j< i; j++){
				xNew[i] -= A[i][j]*xOld[j];
			}
			for(int j = i+1; j<n; j++){
				xNew[i] -= A[i][j]*xOld[j];
			}
			xNew[i] = xNew[i]/A[i][i];
		}
		// that is one iteration of the Jacobi, now compute an error
		error = 0.0;
		for(int i=0; i<n; i++){
			double diff = xNew[i]-xOld[i];
			error += diff*diff;
			xOld[i] = xNew[i];
		}
		// post processing functions
		printf("Iteration %d, x = <%f,%f,%f,%f>\n",iter,xNew[0],xNew[1],xNew[2],xNew[3]);
		iter++;
	}
}
```


**Last Modified:** November 2019
