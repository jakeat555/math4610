# Math 4610 Software Manual File

**Routine Name:** powerIter

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ powerIter.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o powerIter powerIter.cpp

**Description/Purpose:** This method theoreticlly takes sucessive powers of a square matrix `A` and uses thier sucessive multiplications with a vector to estimate an eigen vector. In practice this is done by normalizing the product of the next best approximation vector and `A`. 

**Input:** As input, this method needs a square `nxn` matrix `A` and an intial guess of an eigen vector `v`.

**Output:** This code outputs the largest (in magnitude) eigen value and its corresponding eigen vector.

**Usage/Example:** Using the test diagonally dominant symmettric matrix `A = {4.690001,       0.505418,       0.591491,       0.554785,
0.505418,       4.378429,       0.257732,       0.207382,
0.591491,       0.257732,       4.626262,       0.340127,
0.554785,       0.207382,       0.340127,       4.843852}` and initial guess of `v = {1,-1,1,-1}`, we get the output
```
<2.110644,-1.911330,2.309947,-2.078161,>  Iter 0, theta: 4.205041 error: 0.283264
<2.170158,-1.693528,2.547210,-2.018248,>  Iter 1, theta: 4.246099 error: 0.331465
<2.279648,-1.427608,2.804580,-1.891741,>  Iter 2, theta: 4.303046 error: 0.403740
<2.447830,-1.103204,3.080034,-1.675344,>  Iter 3, theta: 4.387527 error: 0.501921
<2.675435,-0.712553,3.361022,-1.344676,>  Iter 4, theta: 4.515243 error: 0.618779
...
<3.601552,2.064882,2.856675,3.126693,>  Iter 44, theta: 5.930574 error: 0.000025
<3.601548,2.064876,2.856666,3.126708,>  Iter 45, theta: 5.930574 error: 0.000019
<3.601546,2.064872,2.856660,3.126720,>  Iter 46, theta: 5.930574 error: 0.000014
<3.601544,2.064869,2.856655,3.126729,>  Iter 47, theta: 5.930574 error: 0.000011
<3.601542,2.064867,2.856651,3.126735,>  Iter 48, theta: 5.930574 error: 0.000008
Eigen Vector: <0.607284,0.348174,0.481683,0.527222,> Eigen Value: 5.930574
```
Note that the middle few iterations were omitted to maintain presentability.


**Implementation/Code:** The following is the code for powerIter
```
void powerIter(double A[], double y[], double tol, int maxIter, int n){
	double v[n] = {0};
	double theta;
	double norm;
	double error = 10*tol;
	
	int iter = 0;
	
	while(iter < maxIter && error > tol){
		
		norm = 0.0;
		for(int i=0; i<n; i++){
			norm += y[i]*y[i];
		}
		norm = sqrt(norm);
		for(int i=0; i<n; i++){
			v[i] = y[i] / norm;
		}
		
		for(int i=0; i<n; i++){
			y[i] = 0.0;
			for(int j=0; j<n; j++){
				y[i] += A[i*n+j]*v[j];
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
		printVector(y,n);
		printf("  Iter %d, theta: %f error: %f\n",iter,theta, error);
		iter++;
	}
	for(int i=0; i<n; i++){
		y[i] = v[i];
	}	
}
```


**Last Modified:** November 2019
