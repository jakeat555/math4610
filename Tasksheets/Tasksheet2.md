# Task 1: (not complete)
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

# Task 10:
Search the internet for sites that discuss functional iteration for root finding. Try to find sites that show the effective use of this method in real problems. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.
## Solution
The use of functional iteration for root finding has been going on for a while. From what I could gather, there was enough discrepency in the moons actual orbit from what was predicted by Keplarian laws, that Newton used perturbation theory to better appoximate the orbit by using a multi-body system. Much like we are forced to do in the analysis of our methods, many things must be truncated (like the solutuion or our Taylor series approximation). Now we use our computational mathematics to approximate solutions to differential equations.
https://en.wikipedia.org/wiki/Numerical_analysis
https://en.wikipedia.org/wiki/Perturbation_theory
https://en.wikipedia.org/wiki/Celestial_mechanics
