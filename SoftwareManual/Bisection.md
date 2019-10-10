# Math 4610 Software Manual File

**Routine Name:** Bisection

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ Bisection.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o Bisection Bisection.cpp

**Description/Purpose:** The Bisection method is a method used to find roots of functions. It has semi-quadratic convergence for functions that are differentiable around the root. Finding a root is guarenteed through the Intermediate Value Theorm if the condition is met that `f(a)*f(b)<0` where `a` and `b` are the limits of your search bound. Alone, this method will NOT find every root, just one. An interesting note is that the maximum number of iterations for the bisection method can be computed pre-compile time with the equation `log((b-a)/tol)+1`.

**Input:** The input of the Bisection Method is a function `f`, an interval from `a` to `b` and a tolerance. 

**Output:** The output of the Bisection Method is each estimated value for the root, with a final return of the estimation that is closest to the root.

**Usage/Example:** This example is trying to find a root of `f(x) =  x^3 - 5.3` on the interval `[0,2]` with a tolerance of `.0001`. The method call is `bisect(0,2,.0001)` and its output is 
```
c0      1.000000E+00
c1      1.500000E+00
c2      1.750000E+00
c3      1.625000E+00
c4      1.687500E+00
c5      1.718750E+00
c6      1.734375E+00
c7      1.742188E+00
c8      1.746094E+00
c9      1.744141E+00
c10     1.743164E+00
output: 1.743164E+00
```

**Implementation/Code:** The following is the code for Bisection()
```
double bisect(double a,double b,double tol){
			//test f on [a,b]
			if(f(a)==0.0)
				return a;
			if(f(b)==0.0)
				return b;
			try{
				throw f(a)*f(b)>0.0;
			} 
			catch (bool b){
				if(b){
					printf("error in bounds");
				}
			}
			// compute the number of iteration
			double k = log((b-a)/tol)+1;
			double c = .5*(b+a);
			for(int i = 0; i < k; i++){
				c = .5*(b+a);
				printf("c%d\t%E\n",i,c);
				if(f(c)==0.0){
					printf("f(c):%E",f(c));
					return c;
				}
				else if(f(a)*f(c)<0.0){
					b =c;
				}
				else{ //(f(c)*f(b)<0)
					a=c;
				}
			}
			return c;
		}
```


**Last Modified:** September/2019
