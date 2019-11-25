# Task 1
Implement the Method of Steepest Descent for solving linear systems of equations. Put an entry in your software manual that documents the method. Include an example using the diagonally dominant matrix generation routine from the previous tasksheet.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/steepestDescent.md) with the usage/example using the previously made matrix generation.

# Task 2
Tryout your steepest descent method on a sequence of matrices based on the Hilbert matrix. Start with `n=4` and see how far you can go increasing `n`.

## Solution
```
Iteration 0 x = <1.183623,0.657568,0.000000,0.000000>
Iteration 1 x = <0.995746,0.995746,0.000000,0.000000>
Iteration 2 x = <1.000781,0.998543,0.000000,0.000000>
Hilbert Matrix 2 = <1.000781,0.998543,0.000000,0.000000>

Iteration 0 x = <1.303161,0.770049,0.556805,0.000000>
Iteration 1 x = <9.832108,-6.792236,-164.595481,0.000000>
Iteration 2 x = <50.504041,25.235703,-163.961615,0.000000>
Iteration 3 x = <-14.843883,108.067630,-156.246225,0.000000>
Iteration 4 x = <-3.035470,117.325037,-155.618067,0.000000>
Iteration 5 x = <-22.968529,142.199400,-147.490001,0.000000>
Iteration 6 x = <-20.725667,143.796369,-146.876875,0.000000>
Iteration 7 x = <-35.859492,153.080725,-115.698502,0.000000>
Iteration 8 x = <-36.694060,143.917887,-113.375070,0.000000>
Iteration 9 x = <-32.242056,143.715207,-112.575232,0.000000>
Iteration 10 x = <-33.036874,135.811749,-110.153924,0.000000>
Iteration 11 x = <-29.310212,135.679847,-109.361155,0.000000>
Iteration 12 x = <-30.095250,128.731138,-106.826965,0.000000>
Iteration 13 x = <-26.913219,128.658229,-106.041155,0.000000>
Iteration 14 x = <-27.712478,122.427864,-103.382732,0.000000>
Iteration 15 x = <-24.934022,122.403954,-102.603419,0.000000>
Iteration 16 x = <-25.764881,116.709841,-99.815883,0.000000>
Iteration 17 x = <-23.280979,116.726100,-99.042314,0.000000>
Iteration 18 x = <-24.153596,111.429025,-96.129038,0.000000>
Iteration 19 x = <-21.881262,111.477489,-95.360284,0.000000>
Hilbert 3: x = <-21.881262,111.477489,-95.360284,0.000000>

Iteration 0 x = <1.498135,0.922851,0.683150,0.546177>
Iteration 1 x = <6.715818,2.080866,-19.928266,-15.932623>
Iteration 2 x = <10.880891,6.622168,-19.129391,-15.293924>
Iteration 3 x = <-1.139123,15.921247,-13.146769,-10.510825>
Iteration 4 x = <0.717099,17.502013,-12.370550,-9.890239>
Iteration 5 x = <-9.345617,19.562085,-0.249813,-0.199725>
Iteration 6 x = <-6.588180,18.846597,1.220936,0.976137>
Iteration 7 x = <-8.868159,15.262407,2.764978,2.210597>
Iteration 8 x = <-5.994272,14.478665,4.243972,3.393051>
Iteration 9 x = <-8.291635,10.793337,5.775927,4.617847>
Iteration 10 x = <-5.323092,9.954967,7.261348,5.805439>
Iteration 11 x = <-7.635689,6.188648,8.783988,7.022788>
Iteration 12 x = <-4.590438,5.306517,10.274447,8.214408>
Iteration 13 x = <-6.916036,1.475282,11.789854,9.425973>
Iteration 14 x = <-3.808757,0.558071,13.284280,10.620765>
Iteration 15 x = <-6.145267,-3.325229,14.794033,11.827811>
Iteration 16 x = <-2.987906,-4.270575,16.291595,13.025110>
Iteration 17 x = <-5.333471,-8.195651,17.796907,14.228605>
Iteration 18 x = <-2.135721,-9.163570,19.296955,15.427891>
Iteration 19 x = <-4.488740,-13.122175,20.798762,16.628584>
Hilbert 4: x = <-4.488740,-13.122175,20.798762,16.628584>

Iteration 0 x = <1.636137,1.039007,0.783094,0.633811>
Iteration 1 x = <10.906043,-1.049658,-24.629430,-19.934277>
Iteration 2 x = <21.586163,4.337831,-22.278298,-18.031345>
Iteration 3 x = <-2.410084,-0.133809,-21.342018,-17.273551>
Iteration 4 x = <-14.664772,34.029768,-16.695445,-13.512762>
Iteration 5 x = <-14.552112,33.520196,-17.040698,-13.792199>
Iteration 6 x = <-14.534399,34.077500,-16.704730,-13.520277>
Iteration 7 x = <-14.472038,33.601956,-17.043471,-13.794444>
Iteration 8 x = <-14.400087,34.128004,-16.714251,-13.527983>
Iteration 9 x = <-14.380075,33.684577,-17.047860,-13.797996>
Iteration 10 x = <-14.263083,34.180580,-16.724013,-13.535884>
Iteration 11 x = <-14.279567,33.767718,-17.053591,-13.802634>
Iteration 12 x = <-14.124163,34.234797,-16.734015,-13.543980>
Iteration 13 x = <-14.172732,33.851208,-17.060504,-13.808229>
Iteration 14 x = <-13.983774,34.290406,-16.744261,-13.552272>
Iteration 15 x = <-14.061071,33.935010,-17.068515,-13.814713>
Iteration 16 x = <-13.842122,34.347285,-16.754755,-13.560766>
Iteration 17 x = <-13.945595,34.019192,-17.077590,-13.822058>
Iteration 18 x = <-13.699225,34.405405,-16.765511,-13.569471>
Iteration 19 x = <-13.826966,34.103917,-17.087737,-13.830271>
Hilbert 5: x = <-13.826966,34.103917,-17.087737,-13.830271>

Segmentation fault (core dumped)
```
This is the output that I got from running the Hilbert Matrices from `n=2` to `n=8`. I had to start at `n=2` as that was the lowest set that worked. It could be that there is not enough resources on my laptop to compute it more, but that is unlikely as the solutions seem to be divergent, for `n=3` to `n=5`. Then, at `n>5`, there is a segmentation fault which I interpret as the computer couldn't handle the larger matrix.

# Task 3
Implement the Conjugate Gradient method for solving linear systems of equations. Keep in mind that you will need to test the method on a symmetric, positive definite matrix. Create and include a software page for the conjugate gradient method in your software manual.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/conjGrad.md)

# Tasks 4, 5, 6 and 7
As a test of the steepest descent method versus the conjugate gradient method, write code to do the following. First, generate a square symmetric diagonally dominant matrix - you have already created such a method. Then report the number of iterations required to produce a solution to the linear system. Generate the right hand side of the system of equations using `b=Av` where all the entries of `v`are 1.

## Solution
All the methods were ran with the symmetric diagonally dominant matrix
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


# Task 8
Implement a matrix multiplication routine for a tridiagonal matrix that avoids as many computations with zeros as possible. Use the vector form of matrix storage to store the three nonzero diagonals. Create a software manual page for the method.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/triDiagMultiply.md)

# Task 9
Create an analogous routine where the matrix is penta-diagonal with two diagonals above and below the main diagonal of the matrix. Use 5 vectors to store the matrix. As always, document the method in your software manual.

## Solution
Check out my solution [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/pentaDiagMultiply.md)

# Task (not done)
10 Search the internet for sites that document the use of conjugate gradient methods. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

## Solution
This source talks about the theory behind why conjugate gradient methods work. It explores finding the solution to our system of equations as finding the minimum value of an augmented formula. The minimum value is found with successive approximations of the minimum value of Krylov subspaces. It also talks about the computing time/ complexity of the conjugate gradient method.

http://www.seas.ucla.edu/~vandenbe/236C/lectures/cg.pdf
