# Task 1
Write a method/routine that will compute the solution of a square linear systems of equations where the coefficient matrix is diagonal. Put an entry in your software manual that documents the method for diagonal systems.


## Solution
Chcek out the diagonal matrix solver [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/diagonal.md)

# Task 2 
Write a method/routine that will compute the solution of an upper triangular system (the coefficient matrix is upper triangular) and put an entry in your software manual to document the routine.

## Solution
Check out the Upper Triangle solver [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/upperTriangle.md)

# Task 3
Repeat the previous task, but in the case of a lower triangular coefficient matrix.

## Solution
Check out the Lower Triangle solver [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/lowerTriangle.md)

# Task 4
Write a routine that will row reduce a square matrix into row echelon form. Include a page in your software manual.

## Solution
Check out the Row Echlon Form [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/rowEchelon.md)

# Task 5
Write a code that will solve a square linear system of equations using Gaussian elimination (elementary row operations). Use your backsubstitution method to compute the solution. Note that the first part will result in an upper triangular system. Document the code in your software manual.

## Solution
Check out the Gaussian Elimination [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/gaussianElim.md)

# Task 6 (not done)
Write a routine that will compute the LU-factorization of a square matrix. Put an entry in your software manual to document the code.

## Solution


# Task 7 (not done)
Create a routine that will solve a linear system of equations using the LU-factorization. Make sure you include a page in your software manual.

## Solution


# Task 8 (not done)
Using OpenMP, see if you can speed up the LU-factorization solution method from the previous task.

## Solution


# Task 9 (not done)
Embed scaled partial pivoting in a new version of the LU-factorization linear solution method. using more than one processor. Do this without interchanging rows - use an index vector to improve efficiency.

## Solution


# Task 10
Search the internet for sites that document pivoting strategies in numerical solution of linear equations. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

## Solution
Pivoting in regards to numerical solutions of linear equations is the exchanging of rows in the process of reducing a matrix into row echelon form. One way to choose a pivot is to choose the largest number that is in the column. This is partial pivoting and it is pretty good at rudcuting computational roundoff error. Another is to choose the pivot as the default, which is the value at the interaction between the column and rows in question. Then there is complete pivoting, which uses the largest element in the matrix as the pivot, which is the gold standard for error reduction (but is more computational intensive).

https://en.wikipedia.org/wiki/Gaussian_elimination
https://en.wikipedia.org/wiki/Pivot_element
