# Task 1
Implement the Method of Steepest Descent for solving linear systems of equations. Put an entry in your software manual that documents the method. Include an example using the diagonally dominant matrix generation routine from the previous tasksheet.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/steepestDescent.md) with the usage/example using the previously made matrix generation.

# Task 2 (not done)
Tryout your steepest descent method on a sequence of matrices based on the Hilbert matrix. Start with `n=4` and see how far you can go increasing `n`.

## Solution


# Task 3
Implement the Conjugate Gradient method for solving linear systems of equations. Keep in mind that you will need to test the method on a symmetric, positive definite matrix. Create and include a software page for the conjugate gradient method in your software manual.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/conjGrad.md)

# Tasks 4, 5, 6 and 7
As a test of the steepest descent method versus the conjugate gradient method, write code to do the following. First, generate a square symmetric diagonally dominant matrix - you have already created such a method. Then report the number of iterations required to produce a solution to the linear system. Generate the right hand side of the system of equations using `b=Av` where all the entries of `v`are 1.

## Solution
All the methods were ran with the symmetirc diagonally dominant matrix
```
A = 4.671180  0.334231  0.832065  0.734267
	  0.334231  4.759315  0.296214  0.945615
		0.832065  0.296214  4.319090  0.054229
		0.734267  0.945615  0.054229  4.724074
```
and the solution vector `b=Av` where all entries of `v` are 1 
```
b = 6.571743, 6.335375 ,5.501598, 6.458185
```
This produces the results as follows
```
Steepest Descent took 7 iterations and 4.822081E-321 seconds,   x = <1.000000,1.000000,1.000000,1.000000>
Conjugate Grading took 4 iterations and 4.940656E-324 seconds,  x = <1.000000,1.000000,1.000000,1.000000>
GaussianElim took 0.000000E+00 seconds,                         x = <1.000000,1.000000,1.000000,1.000000>
Jacobi Iteration took 10 iterations and 4.940656E-324 seconds,  x = <1.108816,1.005319,0.710265,0.633511>
Gauss Seidel took 5 iterations and 4.940656E-324 seconds,       x = <1.108835,1.005341,0.710273,0.633524>
```


# Task 8  (not done)
Implement a matrix multiplication routine for a tridiagonal matrix that avoids as many computations with zeros as possible. Use the vector form of matrix storage to store the three nonzero diagonals. Create a software manual page for the method.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/triDiagMultiply.md)

# Task 9 (not done)
Create an analogous routine where the matrix is penta-diagonal with two diagonals above and below the main diagonal of the matrix. Use 5 vectors to store the matrix. As always, document the method in your software manual.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/pentaDiagMultiply.md)

# Task (not done)
10 Search the internet for sites that document the use of conjugate gradient methods. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

## Solution

