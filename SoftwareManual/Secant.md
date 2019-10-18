# Math 4610 Software Manual File

**Routine Name:** Secant.cpp

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ Secant.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o Secant Secant.cpp

**Description/Purpose:** This is a root finding method for well defined functions. The advantage of using the Secant method is, athough the function the roots are being found for must have a derivative, it is not neccessary to calculate it. The Secant Method generates a line between two guesses of the roots and then approximates the root with the root of the line.

**Input:** The Secant method takes for input, two intial guesses, a tolerance for error and a maximum number of iterations.

**Output:** The Secant Method will output the root of the line between the two guesses, and will do so iteritivly until the error or iteration bounds are met.

**Usage/Example:** Using the function `f(x)=x^3 - x^2 +15` and the call `Secant(-3,0,.00001,100)` we get the output
```
x0: 0.000000E+00         x1: -1.250000E+00
x0: -1.250000E+00        x1: -5.333333E+00
x0: -5.333333E+00        x1: -1.515492E+00
x0: -1.515492E+00        x1: -1.717421E+00
x0: -1.717421E+00        x1: -2.347716E+00
x0: -2.347716E+00        x1: -2.139252E+00
x0: -2.139252E+00        x1: -2.171579E+00
x0: -2.171579E+00        x1: -2.173969E+00
x0: -2.173969E+00        x1: -2.173935E+00
x0: -2.173935E+00        x1: -2.173935E+00
Output from Secant Method: -2.173935E+00
```

**Implementation/Code:** The following is the code for Secant.cpp
```
double Secant(double x0,double x1, double tol, double maxIter){
	int iter = 0;
	while(fabs(x1-x0) > tol && iter < maxIter){
		iter++;
		double x2 = x1 - (f(x1)*(x1-x0)) / (f(x1)-f(x0));
		x0 = x1;
		x1 = x2;
		printf("x0: %E\t x1: %E\t\n", x0,x1);
	}
	return x1;
}
```

**Last Modified:** October 2019
