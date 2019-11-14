# Math 4610 Software Manual File

**Routine Name:** hybridSecant.cpp

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ hybridSecant.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o hybridSecant hybridSecant.cpp

**Description/Purpose:** This is a hybrid root finding method. For Secant method to work, the intital guess must be suffeciently close to the actual root. So this method applies the [bisection method](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Bisection.md) until the interval is reduced by a factor of about 10. Then another small round of Secant is applied unitil a root within the tolerance is met.

**Input:** This method needs an interval, two intial guesses, an error tolerance and a maximum number of iterations. The interval is only needed for the bisection part and the intial guesses are only used in the Secant part.

**Output:** This method outputs the root of a function in the interval given. 

**Usage/Example:** Using the function `f(x)=x^3-x^2+15` on the interval `[-50,0]` with intial guess of `-49` and `37` and tolerance of `10^-8` method call `hybridNewton(-50,0,-49,37,.000000001,7))` the following is the output
```
Secant Method after 1 iteration: -1.797693E+308
Bisect iteration 0      -2.500000E+01
Bisect iteration 1      -1.250000E+01
Bisect iteration 2      -6.250000E+00
Bisect iteration 3      -3.125000E+00
Bisect iteration 4      -1.562500E+00
Bisect iteration 5      -2.343750E+00
Bisect iteration 6      -1.953125E+00
Secant Method after 2 iteration: -1.797693E+308
Bisect iteration 0      -1.953125E+00
Bisect iteration 1      -5.078125E+00
Bisect iteration 2      -3.515625E+00
Bisect iteration 3      -2.734375E+00
Bisect iteration 4      -2.343750E+00
Bisect iteration 5      -2.148438E+00
Bisect iteration 6      -2.246094E+00
Secant Method after 3 iteration: -1.797693E+308
Bisect iteration 0      -2.246094E+00
Bisect iteration 1      -2.001953E+00
Bisect iteration 2      -2.124023E+00
Bisect iteration 3      -2.185059E+00
Bisect iteration 4      -2.154541E+00
Bisect iteration 5      -2.169800E+00
Bisect iteration 6      -2.177429E+00
Secant Method after 4 iteration: -2.173935E+00
Output from hybridSecant Method: -2.173935E+00
```

**Implementation/Code:** The following is the code for hybridSecant.cpp
```
double hybridSecant(double a, double b,double x0, double x1, double tol, double maxIter){
	int iter = 0;
	double error = 10*tol;
	while(error > tol && iter < maxIter){
		iter++;
		// Make intial approximation with secant method
		x0 = secant(x0,x1,tol,maxIter);
		
		//If approximation isn't close enough (error of -DBL_MAX), then whittle down interval w/ bisection
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
