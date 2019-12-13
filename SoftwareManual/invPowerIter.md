# Math 4610 Software Manual File

**Routine Name:** invPowerIter

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ invPowerIter.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o invPowerIter invPowerIter.cpp

**Description/Purpose:** This method theoretically takes sucessive inverses of a square matrix `A` where `p` is an intial eigen value guess (a shift), and `I` is the identity matrix. It then uses thier sucessive multiplications with a vector to estimate an eigen vector. In practice this is done by normalizing the product of the next best approximation vector and `A`. 

**Input:** As input, this method needs a square `nxn` matrix `A` and an intial guess of an eigen vector `v`.

**Output:** This code outputs the smallest (in magnitude) eigen value and its corresponding eigen vector.

**Usage/Example:** Using the `4x4` matrix `A = {4.690001,       0.505418,       0.591491,       0.554785,
0.505418,       4.378429,       0.257732,       0.207382,
0.591491,       0.257732,       4.626262,       0.340127,
0.554785,       0.207382,       0.340127,       4.843852}` which was generated using our generator for [diagonally dominant symmetric matrices](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/generateSymmetricDiagDom.md).

```
Iter 0, small Eigen value: 4.188096 error: 0.014491
  Iter 1, small Eigen value: 4.158534 error: 0.013622
  Iter 2, small Eigen value: 4.132629 error: 0.013078
  Iter 3, small Eigen value: 4.109043 error: 0.012675
...
  Iter 96, small Eigen value: 3.913585 error: 0.000010
  Iter 97, small Eigen value: 3.913585 error: 0.000009
EigenVector: <0.747708,-0.540106,-0.326748,-0.206045,>
```


**Implementation/Code:** The following is the code for invPowerIter. Note that is is almost exactly the same as the [Power Iteration](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/powerIter.md) code except for calculating `A^-1`.
```
void invPowerIter(double A[], double y[], double tol, int maxIter, int n){
	double v[n] = {0};
	double Ainv[n*n] = {0};
	double theta;
	double norm;
	double error = 10*tol;
	
	int iter = 0;
	
	//LU decomp up here to get A^{-1}
	LUSolveInv(A,Ainv,n);
		
	while(iter < maxIter && error > tol){
		
		//solve Ay = vOld (with LU decomp of A)
		
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
		// lambdaNew = v_{k+1}^TAv_{k+1} maybe? from class
		//LUSolve(A,v,y,n);
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
		printf("  Iter %d, small Eigen value: %f error: %f\n",iter,1/theta, error);
		iter++;
	}
	for(int i=0; i<n; i++){
		y[i] = v[i];
	}	
}
```


**Last Modified:** November 2019
