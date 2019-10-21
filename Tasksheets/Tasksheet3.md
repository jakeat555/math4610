# Task 1
Implement a version of Newton's method for finding the roots of a function of one variable. Document the code in your software manual.
## Solution
Check out the software manual entry [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Newtons.md)

# Task 2
Implement a version of the secant method for finding the roots of a function of one variable. Create a page in your software manual to document the code.
## Solution
Check out the software manual entry [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Secant.md)

# Task 3
Compare the 4 methods for root finding (functional iteration, bisection, Newton's method, and the secant method) using the problems defined in the first two tasks of Task sheet #2.
## Solution
The four methods for root finding all can work; they all find roots. But there is  agreat varity in 1) how they find roots, 2) how quickly they find roots and 3) what conditions must be met for the method to work. Both Newtons and secant use the root a linear line derived from some guessed root as an approximation for the actual root. Bisection finds roots by finding an interval such that the mean value theorm applies and that it fits within the error bounds defined beforehand. Iteritive method looks a guess of a similar function and hopes that the roots are converge to be the same. As one might guess, this method is not the fastest, with only linear error reduction. The bisection is similarly bad, with linear convergence to the root. The secant method is better, being subquadratic but the Newton's Method is the gold standard, with quadratic convergence. These quicker convergences come at a cost though, to implement Newtons method, one must explicitly know the function and its derivative. The secant method is more forgiving, as one doesn't need to know the explicit formula for the derivative of the function; it is enough to know that it exists.

# Task 4
Develop and implement a hybrid method for approximate solution of root finding problems in one variable. Use the bisection method to start the algorithm and switch to Newton's method when the iterates are close enough. Create a page in your software manual for this code.
## Solution
Check out the software manual entry [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/hybridNewton.md)

# Task 5
Repeat the development in Task 4, but replace Newton's method with the secant method. Create a page in your software manual for this code.
## Solution
Check out the software manual entry [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/hybridSecant.md)

# Task 6 (not done)
Add the routines created thus far to your shared library. There should be 8 to 10 routines so far in the course.
## Solution
I'm still kinda figuring out the shared library for c++

# Task 7
In some cases it is necessary to find a number of roots for a function of one variable. Suppose that we know there are several roots in a given interval. Develop code that will break the interval into subintervals and apply the Bisection method to each subinterval. Apply this to the following function
```f(x)=sin(πx^2+3.7)```
Use the interval [1.1,68.3]. It might pay to identify where the zeros are in this problem.
## Solution
```
void bracketing(double a, double b,int numIntervals,double zeros[], double tol, double maxIter){
	double subint = (b-a)/numIntervals;
	printf("subint %f",subint);
	b=a+subint;
	for(int i = 0; i<numIntervals; i++){
		zeros[i] = bisect(a,b,tol,maxIter);
		a=b;
		b=a+subint;
	}
}
```
This code snippet starts by first computing the length of the sub interval. Then across each sub-interval, the [bisection](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Bisection.md) method is run and *a* root in the interval is returned (if any exist).

# Task 8
Repeat the work from Task 7 using Newton's method.
## Solution

# Task 9
Repeat the work from Task 7. using the secant method.
## Solution

# Task 10
Search the internet for sites that identify real problems where some root finding problem is used to compute approximate solutions. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.
## Solution

