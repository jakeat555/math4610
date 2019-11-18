# Task 1
Write a code that implements a Cholesky factorization of a real matrix. Include a check on the matrix to make sure it is symmetric. Put an entry in your software manual that documents the method.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/choleskyFactor.md)

# Task 2
Write a method that implements Jacobi iteration for solving linear systems of equations. Put an entry in your software manual for this method.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/jacobiIter.md)

# Task 3
Write a routine that will create a square matrix with dimension `n`. Use a random number generator to determine the entries in the matrix. You can use a uniform distribution as the basis for the values created. Put a page in for this method.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/generateSquare.md)

# Task 4
Repeat Task 3 with output that is diagonally dominant as defined in class.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/generateDiagDom.md)

# Task 5
Repeat Task 3 with output that is a symmetric matrix.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/generateSymmetric.md)

# Task 6
Repeat Task 3 with output that is both symmetric and diagonally dominant.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/generateSymmetricDiagDom.md)

# Task 7
Use each of the matrix generation routines with your Jacobi iteration to test the code. You should generate a matrix with dimension `n` with `n` large, create the right hand side of the system by multiplying the matrix on the left into a vector of ones. Then solve the resulting system. You solutions should be close to 1 if your Jacobi iteration is working.

## Solution
We started with a `4x4` square matrix, which was generated from previous work.
```
0.390032        0.967939        0.173655        0.453616
0.087746        0.636831        0.696883        0.192656
0.756080        0.955597        0.816563        0.643773
0.982609        0.504067        0.813204        0.218103
```
Note how this is not diagonally dominant, so the Jacobi Iteration is not expected to succeed. And it doesn't. It quickly diverges.
```
Iteration 0, x = <5.089946,2.534607,3.884591,11.544926>
Iteration 1, x = <-16.356720,-5.910219,-12.896455,-31.728222>
Iteration 2, x = <62.399846,28.499406,50.960627,146.980273>
Iteration 3, x = <-259.267485,-106.294208,-203.123507,-525.456609>
Iteration 4, x = <970.434451,419.498247,782.607315,2182.623797>
Iteration 5, x = <-3922.858181,-1647.876641,-3106.361179,-8248.003302>
```

Next was a `4x4` matrix from my diagonally dominant matrix, which was
```
4.000000        0.690001        0.505418        0.591491
0.554785        4.378429        0.257732        0.207382
0.626262        0.340127        4.843852        0.068778
0.409907        0.879994        0.319480        4.980568
```
This is clearly diagonally dominant (or else I am doing something wrong) and this is shown by the Jacobi Iteration converging to 1
```
Iteration 0, x = <1.446727,1.232937,1.213707,1.323132>
Iteration 1, x = <0.885033,0.915511,0.921298,0.908369>
Iteration 2, x = <1.038068,1.023540,1.022098,1.029438>
Iteration 3, x = <0.988794,0.992481,0.993007,0.991290>
Iteration 4, x = <1.003468,1.002244,1.002100,1.002699>
Iteration 5, x = <0.998948,0.999309,0.999356,0.999183>
Iteration 6, x = <1.000321,1.000210,1.000196,1.000250>
```

Then was a `4x4` symmetric matrix generated as such
```
0.390032        0.967939        0.173655        0.453616
0.967939        0.087746        0.636831        0.696883
0.173655        0.636831        0.192656        0.756080
0.453616        0.696883        0.756080        0.955597
```
Since it is not diagonally dominant, then we expect the Jaocbi to fail. As it does
```
Iteration 0, x = <5.089946,27.230860,9.131416,2.995171>
Iteration 1, x = <-70.037695,-118.977625,-97.223635,-26.504383>
Iteration 2, x = <374.468012,1715.942542,569.562804,199.932320>
Iteration 3, x = <-4739.463413,-9825.148485,-6785.146863,-1876.783557>
Iteration 4, x = <29591.785724,116458.770698,44123.974273,14786.412477>
Iteration 5, x = <-325851.988664,-764075.493234,-469651.962438,-133884.720510>
```

Finally, we generated a diagonally dominant, symmetric matrix as follows
```
4.118048        0.676730        0.134226        0.501243
0.676730        4.500454        0.344439        0.176906
0.134226        0.344439        4.943948        0.232431
0.501243        0.176906        0.232431        4.698243
```
Since it was diagonlly dominant, the Jacobi Iteration finds an approximation to the solution
```
Iteration 0, x = <1.318646,1.266212,1.143832,1.193813>
Iteration 1, x = <0.927974,0.933459,0.963690,0.948865>
Iteration 2, x = <1.018342,1.015619,1.008995,1.011986>
Iteration 3, x = <0.995681,0.996082,0.997850,0.997010>
Iteration 4, x = <1.001078,1.000931,1.000531,1.000715>
Iteration 5, x = <0.999743,0.999769,0.999872,0.999824>
```
# Task 8 (not done)
Implement the Gauss-Seidel method for solving linear systems of equations. Include a software manual page for this method.

## Solution
Check out the solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/gaussSeidel.md)

# Task 9 (not done)
Run the Gauss-Seidel iteration on the same matrices as you created in Task 7. Compare the results of the Jacobi iteration runs to the Gauss-Seidel runs. This means keeping track of the number of iterations for each method.

## Solution

# Task 10 (not done)
Search the internet for sites that document the use of Jacobi iteration and/or Gauss-Seidel. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

## Solution
