# Math 4610 Software Manual File

**Routine Name:** fixedPt

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ fixedPt.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o fixedPt fixedPt.cpp

**Description/Purpose:** This is a method that will compute the root `x*` of a function `f(x)`. The function needs to be defined around its root. This method also uses a helper function `g(x)`. The root of `f(x)` can be found if the absolute value of the derivitve of the helper function `g'(x*)` is less 1. This method iterates around the root, spiraling in toward the root. The only two limitations of this method are (1) convergence is only done in linear time, and (2) finding a good helper function is super hard.

**Input:** 
fixedPt has inputs of a function `f`, a helper function `g`, an intial guess `x0`, and a tolerance and max iteration. Currently, `f` and `g` are method calls, the author is still trying to figure out functors in C++.

**Output:** 
fixedPt will output each guess that it makes until the tolerance or max iterations is met. This includes a final return value of the root approximation

**Usage/Example:**
Using the functions `f(x) = x*cosh(x) + x*x*x - M_PI` and `g(x) =  x- .15*(x*cosh(x) + x*x*x - M_PI)` with a starting guess of `x0 = 1` will yield
```
x0       g(x)=1.089777E+00
x1       g(x)=1.096352E+00
x2       g(x)=1.096328E+00
x3       g(x)=1.096328E+00

Output: 1.096328E+00
```

**Implementation/Code:** The following is the code for fixedPt()
```
double fixedPt( double x0 , double tolerance , int maxIteration){
		double error = 10 * tolerance;
		double x1 = 0.0;
		int iteration = 0;
		
		while(error > tolerance & iteration < maxIteration){
			x1 = g(x0);
			printf("x%d \t g(x)=%E \n",iteration, x1);
			error = fabs(x1-x0);
			x0 = x1;
			if (++iteration >= maxIteration){
				printf("Error: too many iterations, error of %E at %d iteration\n",error, iteration);
			}
		}
		return x1;
	} 
```

**Last Modified:** October/2019
