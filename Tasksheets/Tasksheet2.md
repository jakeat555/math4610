# Task 1:
Consider the nonlinear equation
```
x*cosh(x)+x^3=π
```
Set up a root finding problem for this equation. This task does not require any code.

## Solution
We can set up the root finding problem with this by rearranging the terms to get `x*cosh(x)+x^3-π = 0`. This will let us solve for the root of this equation, which we now call `f(x)`.

# Task 2:
Consider the nonlinear equation
```
x*cosh(x)+x^3=π
```
Set up at least two associated fixed point iteration for this equation. You do not need to write a code for this problem.

## Solution
Our first fixed point iteration will be `g1(x) = x => g1(x) =  x - .15(x*cosh(x)+x^3-pi)` . This has a derivative `g1'(x) = 1-.15*(3*x^2+x*sinh(x)+cosh(x))` which, evaluated at our root, is about `.009`. This means that `|g1(x*)| = .009` which means that this function will converge to the root quickly.

Our second fixed point iteration will be `g2(x) = x => g2(x) = x- .002(x*cosh(x)+x^3-pi)` . This has a derivative `g2'(x) = 1-0.002(3x^2+x*sinh (x)+cosh(x))` which evaluated at our root, is about `0.986`. This means that `|g2'(x*)| = .986 < 1` which means that this function will converge to the root (eventually).

Below is a table showing how quickly both `g1(x)` and `g2(x)` converge

| x          | g1(x)       | g2(x)       | error 1     | error 2     |
|------------|-------------|-------------|-------------|-------------|
| x0 = 1     | 1.089776803 | 1.001197024 | 0.006550987 | 0.095130766 |
| x1 = g(x0) | 1.096351589 | 1.002380344 | 0.000023799 | 0.093947446 |
| x2 = g(x1) | 1.096327572 | 1.003550089 | 2.18e-7     | 0.092777701 |
| x3 = g(x2) | 1.096327790 | 1.004706387 | 0           | 0.091621403 |
| x4 = g(x3) | 1.096327788 | 1.005849367 | 1.999e-9    | 0.090478423 |

Note how quickly our first interation converged, but then sporadiclly changed. The second iteration was a more slow and steady convergance.

# Task 3:
Write code that implements fixed point iteration for the equation defined in the previous two tasks. Try out the method on the fixed point iteration equations in Task 1 and Task 2. Make sure that the code you write is in the form of a method or subroutine that can be added to your shared library. You should also write a main program to test the code.
## Solution
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
We define a main function to call fixedPt() using our set up in Task 1, with the finding function to be g1(x) from Task 2. Using our main function to call this method, we ge the following output:
```
x0       g(x)=1.089777E+00
x1       g(x)=1.096352E+00
x2       g(x)=1.096328E+00
x3       g(x)=1.096328E+00

Output: 1.096328E+00
```
# Task 4:
Write a code that computes the roots of a function of one variable using the Bisection method. The algorithm should be written into a subroutine or method that can be called from a main program. Include the routine in the shared library that you are creating for the course.
## Solution
The method is as follows
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
We can then write a main function, that tests the method on the function `x^3-5.3` which has a root at `1.74351`.
The call from the main function will output the following, where `ci` is the aproximate root after `i` iterations.
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
# Task 5:
Start your software manual by including the routines you have written for computing the single precision machine epsilon and double precision machine epsilon. Use the template provided in the math4610 repository for the course.
## Solution
Check out smaceps [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/smaceps.md)

Check out dmaceps [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/dmaceps.md)
# Task 6:
Add pages in your software manual that document the routines created for absolute error and relative error.
## Solution
Check out abserr [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/abserr.md)

Check out relerr [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relerr.md)
# Task 7:
Complete pages in your software manual that document the code written for functional iteration for finding the roots of a function of a single real variable. Use the results in Task 3 as examples for the software page.
## Solution
Check out the entry here: [FixedPt](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/FixedPoint.md)

# Task 8:
Repeat Task 7 for the Bisection method.
## Solution
Check out the entry here: [Bisection](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Bisection.md)\

# Task 9:
Compare the results from functional iteration and Bisection on the problems in Tasksheet 2, Task 1 and Task2. Which provides a better approximation and on the efficiency of the methods.
## Solution
The functional iteration problem finds a root in linear time. It aslo has the restriction that `g(x)` is very hard to find. The bisection method converges to a root faster, at a semi-quadratic rate. But the trade off of speed, comes at the cost of knowledge, as the function must be once differentiable around the root for the bisection to work. Futhermore, there is some peace in knowing that the bisection method will only iterate a predetermined number of times. Finally, in the authors personal opinion, the bisection method makes more intuitive sense. 

# Task 10:
Search the internet for sites that discuss functional iteration for root finding. Try to find sites that show the effective use of this method in real problems. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.
## Solution
The use of functional iteration for root finding has been going on for a while. From what I could gather, there was enough discrepency in the moons actual orbit from what was predicted by Keplarian laws, that Newton used perturbation theory to better appoximate the orbit by using a multi-body system. Much like we are forced to do in the analysis of our methods, many things must be truncated (like the solutuion or our Taylor series approximation). Now we use our computational mathematics to approximate solutions to differential equations.
https://en.wikipedia.org/wiki/Numerical_analysis
https://en.wikipedia.org/wiki/Perturbation_theory
https://en.wikipedia.org/wiki/Celestial_mechanics
