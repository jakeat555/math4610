# Task 1: (not complete)
Consider the nonlinear equation
```
x*cosh(x)+x^3=π
```
Set up a root finding problem for this equation. This task does not require any code.

## Solution
We will use the Bisection method to find this root. We can set the lower bound `a` to be 0.5 and `b` to be 1.5 Evaluating for our function at these points gives us `f(a)=.689` and `f(b)=6.904`. If we modify the conditions to be `f(a)f(b)-f(b)π<0` which evaluates to `-16.932<0`. Thus there is a root (where `x*cosh(x)+x^3=π` ) on the interval [.5,1.5].

We can set up the root finding problem with this by rearranging the terms to get `x*cos(x)+x^3-π = 0`. This will let us solve for the root of this equation, which we now call `f(x)`.

# Task 2: (not complete)
Consider the nonlinear equation
```
x*cosh(x)+x^3=π
```
Set up at least two associated fixed point iteration for this equation. You do not need to write a code for this problem.

## Solution
Our first fixed point iteration will be `g(x) = x + f(x) = x*cos(x)+x^3+x-pi`. 

# Task 3:  (not complete)
Write code that implements fixed point iteration for the equation defined in the previous two tasks. Try out the method on the fixed point iteration equations in Task 1 and Task 2. Make sure that the code you write is in the form of a method or subroutine that can be added to your shared library. You should also write a main program to test the code.
## Solution
# Task 4:  (not complete)
Write a code that computes the roots of a function of one variable using the Bisection method. The algorithm should be written into a subroutine or method that can be called from a main program. Include the routine in the shared library that you are creating for the course.
## Solution
# Task 5:  (not complete)
Start your software manual by including the routines you have written for computing the single precision machine epsilon and double precision machine epsilon. Use the template provided in the math4610 repository for the course.
## Solution
# Task 6:  (not complete)
Add pages in your software manual that document the routines created for absolute error and relative error.
## Solution
# Task 7:  (not complete)
Complete pages in your software manual that document the code written for functional iteration for finding the roots of a function of a single real variable. Use the results in Task 3 as examples for the software page.
## Solution
# Task 8:  (not complete)
Repeat Task 7 for the Bisection method.
## Solution
# Task 9:  (not complete)
Compare the results from functional iteration and Bisection on the problems in Tasksheet 2, Task 1 and Task2. Which provides a better approximation and on the efficiency of the methods.
## Solution
# Task 10:  (not complete)
Search the internet for sites that discuss functional iteration for root finding. Try to find sites that show the effective use of this method in real problems. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.
## Solution
