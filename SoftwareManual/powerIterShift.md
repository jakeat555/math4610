# Math 4610 Software Manual File

**Routine Name:** powerIterShift

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ powerIterShift.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o powerIterShift powerIterShift.cpp

**Description/Purpose:** This method theoreticlly takes sucessive powers of a square matrix `A-pI` where `p` is an intial eigen value guess (a shift), and `I` is the identity matrix. It then uses thier sucessive multiplications with a vector to estimate an eigen vector. In practice this is done by normalizing the product of the next best approximation vector and `A-pI`. 

**Input:** As input, this method needs a square `nxn` matrix `A` and an intial guess of an eigen vector `v` and an intial shift value `p`.

**Output:** This code outputs the closest eigen value to the shift and its corresponding eigen vector.

**Usage/Example:** Using the test diagonally dominant symmettric matrix `A = {4.690001,       0.505418,       0.591491,       0.554785,
0.505418,       4.378429,       0.257732,       0.207382,
0.591491,       0.257732,       4.626262,       0.340127,
0.554785,       0.207382,       0.340127,       4.843852}` and initial shift of `4`, we get the output
```
 Iter 0, Eigen value: -3.961228 error: 0.014491
  Iter 1, Eigen value: -3.961334 error: 0.014546
  Iter 2, Eigen value: -3.961441 error: 0.014602
  Iter 3, Eigen value: -3.961549 error: 0.014660
  Iter 4, Eigen value: -3.961658 error: 0.014719
...
  Iter 98, Eigen value: -3.982459 error: 0.028895
  Iter 99, Eigen value: -3.982880 error: 0.029072
<-0.565348,0.133996,-0.752413,0.310324,>
```

**Implementation/Code:** The following is the code for powerIterShift. Note that this is almost the same as [Power Iteration](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/powerIter.md) code except for calculating `A^-1` and using a shift.
```
void invPowerShiftIter(double A[], double y[], double shift, double tol, int maxIter, int n){
	double v[n] = {0};
	double Ainv[n*n] = {0};
	double theta;
	double norm;
	double error = 10*tol;
	
	int iter = 0;
	
	//LU decomp up here to get A^{-1}
	LUSolveInv(A,Ainv,n);
	for(int i=0;i<n;i++){
		Ainv[i*n+i] =  Ainv[i*n+i]-shift;
	}
		
	while(iter < maxIter && error > tol){
		
		
		// 2.
		norm = 0.0;
		for(int i=0; i<n; i++){
			norm += y[i]*y[i];
		}
		norm = sqrt(norm);
		for(int i=0; i<n; i++){
			v[i] = y[i] / norm;
		}
		
		//3.
		for(int i=0; i<n; i++){
			y[i] = 0.0;
			for(int j=0; j<n; j++){
				y[i] += Ainv[i*n+j]*v[j];
			}
		}

		theta = 0.0;
		for(int i=0; i<n; i++){
			theta += v[i]*y[i];
		}
		
		norm = 0.0;
		for(int i=0; i<n; i++){
			norm += (y[i] - theta*v[i]) * (y[i] - theta*v[i]);
		}
		error = sqrt(norm);
		printf("  Iter %d, Eigen value: %f error: %f\n",iter,theta, error);
		iter++;
	}
	for(int i=0; i<n; i++){
		y[i] = v[i];
	}	
}
```


**Last Modified:** December 2019
