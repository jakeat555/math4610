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
The four methods for root finding all can work; they all find roots. But there is a great variety in 1) how they find roots, 2) how quickly they find roots and 3) what conditions must be met for the method to work. Both Newtons and secant use the root a linear line derived from some guessed root as an approximation for the actual root. Bisection finds roots by finding an interval such that the mean value theorem applies and that it fits within the error bounds defined beforehand. Iterative method looks a guess of a similar function and hopes that the roots are converge to be the same. As one might guess, this method is not the fastest, with only linear error reduction. The bisection is similarly bad, with linear convergence to the root. The secant method is better, being subquadratic but the Newton's Method is the gold standard, with quadratic convergence. These quicker convergences come at a cost though, to implement Newton’s method, one must explicitly know the function and its derivative. The secant method is more forgiving, as one doesn't need to know the explicit formula for the derivative of the function; it is enough to know that it exists.

Let’s walk through an example with the function `f(x)=x^3+1`. For the functional iteration, an initial guess of `x=-2` may lead to approximate root of `x=-1.16` the formula of `g(x)=x-2(x^3+1)`. For the bisection method, an initial interval of `[-5,0]` would become `[-2.5,0]` after one iteration, `[-1.25,0]` after the second and so on until the tolerance is met, giving an approximate root of `[-1,-1]`. Newton's method would use the explicit derivative `f’(x)=3x^2` and an initial guess `x=-2` to find the tangent line at the guess, which would immediately point to the solution `x=-1` after just one iteration. The secant method may take initial guesses `x=-2` and `x=0` to get the approximate root of `x=-0.125` which is the root of the secant line.


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
This code snippet starts by first computing the length of the sub interval. Then across each sub-interval, the [bisection](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Bisection.md) method is run and *a* root in the interval is returned (if any exist). It will output a list of the roots as such (20 subintervals):
```
Bracket num 0 has zero at: 3.698750
Bracket num 1 has zero at: 5.903750
Bracket num 2 has zero at: 8.843750
Bracket num 3 has zero at: 14.408750
Bracket num 4 has zero at: 17.716250
Bracket num 5 has zero at: 18.188750
Bracket num 6 has zero at: 23.281250
Bracket num 7 has zero at: 25.486250
Bracket num 8 has zero at: 29.738750
Bracket num 9 has zero at: 34.201250
Bracket num 10 has zero at: 35.041250
Bracket num 11 has zero at: 38.611250
Bracket num 12 has zero at: 43.493750
Bracket num 13 has zero at: 46.276250
Bracket num 14 has zero at: 49.268750
Bracket num 15 has zero at: 54.098750
Bracket num 16 has zero at: 55.043750
Bracket num 17 has zero at: 58.351250
Bracket num 18 has zero at: 64.231250
Bracket num 19 has zero at: 65.963750
```

# Task 8
Repeat the work from Task 7 using Newton's method.
## Solution
```
void bracketing(double a, double b,int numIntervals,double zeros[], double tol, double maxIter){
	double subint = (b-a)/numIntervals;
	b=a+subint;
	for(int i = 0; i<numIntervals; i++){
		zeros[i] = Newton(b-subint/2,tol,maxIter);
		a=b;
		b=a+subint;
	}
}
```
This code snippet starts by first computing the length of the sub interval. Then across each sub-interval, the [Newton](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Newtons.md) method is run and *a* root in the interval is returned (if any exist). This method uses the center of the interval as the intital guess. It will output a list of the roots as such (20 subintervals):
```
Bracket num 0 has zero at: 2.969027
Bracket num 1 has zero at: 6.116043
Bracket num 2 has zero at: 9.662235
Bracket num 3 has zero at: 12.998957
Bracket num 4 has zero at: 16.202447
Bracket num 5 has zero at: 19.604479
Bracket num 6 has zero at: 23.000738
Bracket num 7 has zero at: 26.250577
Bracket num 8 has zero at: 29.686446
Bracket num 9 has zero at: 33.204082
Bracket num 10 has zero at: 36.411327
Bracket num 11 has zero at: 39.761946
Bracket num 12 has zero at: 43.137525
Bracket num 13 has zero at: 46.476804
Bracket num 14 has zero at: 49.849836
Bracket num 15 has zero at: 53.192825
Bracket num 16 has zero at: 56.556535
Bracket num 17 has zero at: 59.907512
Bracket num 18 has zero at: 63.267799
Bracket num 19 has zero at: 66.627837
```

# Task 9
Repeat the work from Task 7. using the secant method.
## Solution
```
void bracketing(double a, double b,int numIntervals,double zeros[], double tol, double maxIter){
	double subint = (b-a)/numIntervals;
	b=a+subint;
	for(int i = 0; i<numIntervals; i++){
		zeros[i] = Secant(a,b,tol,maxIter);
		a=b;
		b=a+subint;
	}
}
```
This code snippet starts by first computing the length of the sub interval. Then across each sub-interval, the [Secant](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/Secant.md) method is run and *a* root in the interval is returned (if any exist). This method uses the edges of the subinterval as intial guesses. It will output a list of the roots as such (20 subintervals):
```
Bracket num 0 has zero at: 3.831012
Bracket num 1 has zero at: 5.134234
Bracket num 2 has zero at: 16.049197
Bracket num 3 has zero at: 7.388219
Bracket num 4 has zero at: 16.218794
Bracket num 5 has zero at: 24.840448
Bracket num 6 has zero at: 16.515099
Bracket num 7 has zero at: 27.387164
Bracket num 8 has zero at: 28.533106
Bracket num 9 has zero at: 48.892778
Bracket num 10 has zero at: 164.172700
Bracket num 11 has zero at: 39.896166
Bracket num 12 has zero at: 35.957569
Bracket num 13 has zero at: 95.196052
Bracket num 14 has zero at: 49.761103
Bracket num 15 has zero at: 53.586748
Bracket num 16 has zero at: 38.365808
Bracket num 17 has zero at: 59.850946
Bracket num 18 has zero at: 63.088357
Bracket num 19 has zero at: 69.285603
```
Note how some of these, like subinterval 10, are clearly wrong. This is becasue of the troubles with the secant method, it doesn't work in this case becuse a slight deviation from the root gives a very large number. 
# Task 10
Search the internet for sites that identify real problems where some root finding problem is used to compute approximate solutions. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.
## Solution
This paper had som cool implications. They were motivated by finding the starts of solutions to directional games like chess. They then related a real life application of ustilizing the root finding functions in econimcs to help predict the best balence between pricing and investing. They also related how using their methods, they could reduce such a complex game into more mangeable part, which then in turn are solved with root finding.
Fedor Iskhakov, John Rust, Bertel Schjerning, Recursive Lexicographical Search: Finding All Markov Perfect Equilibria of Finite State Directional Dynamic Games, The Review of Economic Studies, Volume 83, Issue 2, April 2016, Pages 658–703, https://doi-org.dist.lib.usu.edu/10.1093/restud/rdv046
