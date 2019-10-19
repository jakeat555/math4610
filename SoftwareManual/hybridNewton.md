# Math 4610 Software Manual File

**Routine Name:** hybridNewton.cpp

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ hybridNewton.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o hybridNewton hybridNewton.cpp

**Description/Purpose:** This is a hybrid root finding method. For Newtons method to work, the intital guess must be suffeciently close to the actual root. So this method applies the [bisection method](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Bisection.md) until the interval is reduced by a factor of about 10. Then another small round of Newtons is applied unitil a root within the tolerance is met.

**Input:** This method needs an interval, an intial guess, an error tolerance and a maximum number of iterations. The interval is only needed for the bisection part and the intial guess is only used in the Newtons part.

**Output:** This method outputs the root of a fucntion in the interval given. 

**Usage/Example:** Using the function `f(x)=x^3-x^2+15` on the interval `[-5,5]` with an intial guess of `-3` and tolerance of `10^-8` method call `hybridNewton(-5,5,-3,.000000001,4))` the following is the output
```
Newtons Method after 1 iteration: -1.797693E+308
Bisect iteration 0      0.000000E+00
Bisect iteration 1      -2.500000E+00
Bisect iteration 2      -1.250000E+00
Bisect iteration 3      -1.875000E+00
Newtons Method after 2 iteration: -1.797693E+308
error in boundsBisect iteration 0       -1.875000E+00
Bisect iteration 1      -1.875000E+00
Bisect iteration 2      -1.875000E+00
Bisect iteration 3      -1.875000E+00
Newtons Method after 3 iteration: -1.797693E+308
Bisect iteration 0      -1.875000E+00
Bisect iteration 1      -2.109375E+00
Bisect iteration 2      -2.226562E+00
Bisect iteration 3      -2.167969E+00
Newtons Method after 4 iteration: -2.173935E+00
Output from hybridNewton Method: -2.173935E+00
```

**Implementation/Code:** The following is the code for hybridNewton.cpp
```
double hybridNewton(double a, double b,double x0, double tol, double maxIter){
	int iter = 0;
	double error = 10*tol;
	while(error > tol && iter < maxIter){
		iter++;
		x0 = Newton(x0,tol,maxIter);
		printf("Newtons Method after %d iteration: %E\n",iter,x0);
		if( x0 == -DBL_MAX){
			x0 = bisect(a,b,tol,maxIter);
			double unit = (a+b)/8;
			a = x0 - unit;
			b = x0 + unit;
		}
		else{
			return x0;
		}
	}
}
```


**Last Modified:** October 2019
