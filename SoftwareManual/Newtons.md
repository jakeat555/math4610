# Math 4610 Software Manual File

**Routine Name:** Newtons

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ Newtons.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o Newtons Newtons.cpp

**Description/Purpose:** This is a root finding method that aims to find a root of a well defined function (meaning that it is twice diffirentable). It does this by computing sucessive tangent lines for the function with the hope that the root of the tangent line will be a better approximation than the one before.

**Input:** This method takes an input of an intital guess, a tolerance and a maximium number of iterations to run. The inital guess must be close enough to the root or convergence to the root may not happen.

**Output:** This method outputs the value closest to the root, as constrianded by the tolerance and maximum iteration.

**Usage/Example:** For example, if we have the function `f(x)=x^3-x^2+15` and we call `Newton(3,.00001,100)` we get the output
```
x0:1.428571E+00 at step 0
x0:-3.433036E+00 at step 1
x0:-2.550902E+00 at step 2
x0:-2.221696E+00 at step 3
x0:-2.174838E+00 at step 4
x0:-2.173936E+00 at step 5
x0:-2.173935E+00 at step 6
Output from Newtons Method: -2.173935E+00
```

**Implementation/Code:** The following is the code for Newtons()
```
double Newton(double x0,double tol, double maxIter){
	double error = 10*tol;
	int iter = 0;
	while(error > tol && iter < maxIter){
		iter++;
		double h = f(x0)/fPrime(x0);
		error = fabs(h);
		x0 -= h;
		printf("x0:%E at step %d\n",x0,iter-1);
	}
	return x0;
}

```

**Last Modified:** October 2019
