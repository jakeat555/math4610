# Task 1
Write code that implements the power method for finding the largest eigenvalue in magnitude of a square matrix. Document the method in your software manual page. Use a symmetric diagonally dominant matrix to test the method and include the results as an example in your software manual.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/powerIter.md).
# Task 2
Try out your power method on the Hilbert matrix of order `n=10`.

## Solution
```
<0.648690,0.491105,0.404643,0.346921,0.304815,0.272426,0.246593,0.225435,0.207748,0.192718,>Iter 0, theta: 0.853790 error: 0.759060
<1.162427,0.737449,0.560425,0.457848,0.389366,0.339826,0.302068,0.272208,0.247934,0.227773,>Iter 1, theta: 1.701951 error: 0.260600
<1.216432,0.746695,0.557930,0.450969,0.380661,0.330383,0.292403,0.262583,0.238484,0.218567,>Iter 2, theta: 1.749938 error: 0.052803
<1.223854,0.746473,0.555891,0.448354,0.377879,0.327594,0.289677,0.259948,0.235951,0.216137,>Iter 3, theta: 1.751843 error: 0.010350
<1.225178,0.746350,0.555433,0.447794,0.377294,0.327013,0.289112,0.259404,0.235429,0.215638,>Iter 4, theta: 1.751917 error: 0.002026
<1.225432,0.746323,0.555340,0.447683,0.377178,0.326898,0.289000,0.259297,0.235326,0.215540,>Iter 5, theta: 1.751919 error: 0.000397
<1.225482,0.746317,0.555322,0.447661,0.377155,0.326876,0.288978,0.259276,0.235306,0.215520,>Iter 6, theta: 1.751920 error: 0.000078
<1.225491,0.746316,0.555319,0.447657,0.377151,0.326871,0.288974,0.259271,0.235302,0.215516,>Iter 7, theta: 1.751920 error: 0.000015
<1.225493,0.746316,0.555318,0.447656,0.377150,0.326870,0.288973,0.259271,0.235301,0.215516,>Iter 8, theta: 1.751920 error: 0.000003
Eigen Vector: <0.699514,0.425999,0.316977,0.255524,0.215279,0.186579,0.164947,0.147993,0.134311,0.123017,> Eigen Value: 1.751920
```
This is the output of finding the largest eigen value for the order 10 Hilbert Matrix, a value of 1.75

# Task 3 (not done)
Implement the inverse power method for finding the smallest eigenvalue of a square matrix. Use a symmetric diagonally dominant matrix to test the method and include the results as an example in your software manual.

## Solution

# Task 4 (not done)
Try out your inverse power method on the Hilbert matrix of order `n=10`.

## Solution

# Task 5 (not done)
Implement the power method with shifting to try to estimate eignevalues of a matrix. Include a page in your software manual. Try to find as eigenvalues not equal to the largest or smallest. Use a symmetric diagonally dominant matrix to test the code.

## Solution

# Task 6 (not done)
Try out your shifted power method on the Hilbert matrix of order `n=10`.

## Solution

# Task 7 (not done)
Knowing that the condition number a matrix in the 2-norm is related to the largest and smallest eigenvalues, write a routine that will compute an estimate of the 2-condition number using the power method and inverse power method.

## Solution

# Task 8 (not done)
Try out the condition number code on the Hilber matrix for `n=10`. Does this work?

## Solution

# Task 9 (not done)
Combine the tridiagonal matrix multiplication routine to compute the 2-condition number of a tridiagonal matrix. Use a symmetric diagonally dominant tridiagonal matrix to test the code. Use a tridiagonal matrix with `n = 10 , 100 , 1000 , 10,000`. Report the results including execution time.

## Solution

# Task 10 (not done)
Search the internet for sites that document the use of Power iteration and/or Inverse Power Iteration. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

## Solution

