# Task 1
Determine if there might be an advantage to using one of the hybrid methods for root finding for the problem defined in Task 7 on Tasksheet 3. Justify your answer with results from your codes.

## Solution
From the tasks we did, we found that with that specific formula, the secant hybrid was not the best. This makes a lot of sense, as the secant method relies on an equation which isn't as steep around the roots (so that the line between the two guesses actually is an approximation). However, the task is to find many roots in an objectivly small interval, meaning that the function is one that changes a lot, and is steep around the roots. With how small a subinterval can get, it is feasible that Newtons Method will be as slow as Secant, but explicitly defining the derivative of the function allows for greater root finding accuracy.

# Task 2
Develop codes to compute the length of a vector of arbitrary length using the 1-norm, 2-norm, and infinity norm. Add the object modules to your shared library and create three pages to put in your software manual.

## Solution
Check the out!

[length_1](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_1.md) - 1-Norm Vector Length

[length_2](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_2.md) - 2-Norm Vector Length

[length_Inf](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_Inf.md) - Infinty-Norm Vector Length

# Task 3 
Develop codes that compute the absolute and relative error in using one vector `x` as an approximation of another vector, `x∗`. Create these routines for the 1-norm, 2-norm, and infinity norm. Make sure you add these routines to your shared library and create software manual pages for all 6 codes.

## Solution
Check them out!
[absError1](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relError1.md) - 1-Norm Absolute Error of Vectors

[absError2](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relError2.md) - 2-Norm Absolute Error of Vectors

[absErrorInf](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relErrorInf.md) - Infinty-Norm Absolute Error of Vectors

[relError1](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relError1.md) - 1-Norm Realitive Error of Vectors

[relError2](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relError2.md) - 2-Norm Realitive Error of Vectors

[relErrorInf](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relErrorInf.md) - Infinty-Norm Realitive Error of Vectors

# Task 4
Write codes that return (1) the sum of two vectors, (2) difference of two vectors, and (3) a scalar multiple of a vector.

## Solution
```
void sum(double x[],double y[],double z[],int n){
	for(int i=0; i < n; i++){
		z[i] = x[i]+y[i];
	}
}

void difference(double x[],double y[],double z[],int n){
	for(int i=0; i < n; i++){
		z[i] = x[i]+y[i];
	}
}

void scalarMult(double x[],double z[],double a, int n){
	for(int i=0; i < n; i++){
		z[i] = x[i]*a;
	}
}
```
For each of these, we test with `x[] = {2,52,1,4,3}` and `y[]= {12,2,6,2,10}` and `a=2.2`.
```
Sum is: <14.000000,54.000000,7.000000,6.000000,13.000000>
Diffrence is: <-10.000000,50.000000,-5.000000,2.000000,-7.000000>
Scalar Multiply is: <4.400000,114.400000,2.200000,8.800000,6.600000>
```
The result is saved in a thrid vector that is passed in called `z`. And `n` is the length of the vectors (5 in this case).

# Task 5
Wrte a code that implements a "SAXPY" operation involing input of a couple of vectors and a scalar. Do an internet search to find out what a SAXPY operation. Add the routine to your shared library and the software manual.

## Solution
Check out my version of SAXPY [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/SAXPY.md)

# Task 6
Write codes to implement (1) the dot product of two vectors and (2) the cross product of two vectors. As usual, add these to your shared library and software manual.

## Solution
Check out the dot product code [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/dotProduct.md) and the cross product code [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/crossProduct.md)

# Task 7
Create a routine that will return the output from multiplying a matrix into a vector from the left. Do this for a general rectangular matrix, `A`. That is, `y=A.x`

## Solution
```
void leftMultiply(double A[][4], double x[][1], double y[],int n, int m){
	for(int i=0; i<m ;i++){
		for(int j=0; j<n;j++){
			y[i] += A[i][j]*x[j][0];
		}
	}
}
```
This is the code for the Left Multiplication. To test it, we used `A[][4] = { {1,34,62,4.4} , {235,23.2,46,1.2} , {23,54,24.5,6.1}}` and 
`x[][1] = { {4.77} , {2} , {1.9} , {5.3}}`. This results in 
```Left Mutliply: <213.890000,1261.110000,296.590000>```


# Task 8
Download and use the "Hello World" handout that uses OpenMP to do a single print of a string for each processor your computer has. Report how many processors your laptop or desktop has.

## Solution
```
Hello World... from thread = 1
Hello World... from thread = 2
Hello World... from thread = 3
Hello World... from thread = 0
```
This means that I have 4 processors.

# Task 9(not done)
Use OpenMP to try to speed up the matrix-vector multiplication using more than one processor.

## Solution
To speed up our code, we place the snippet `#pragma omp parallel for collapse(2)` before both for loops in LeftMultiply. This allowes the use of the 4 processers on this laptop in parallel, so long as I compile with the flag `-fopenmp`. This screen capture shows that using the multi-core processing is about `10^3` times faster.
![Image](https://github.com/jakeat555/math4610/blob/master/Tasksheets/src/LeftButFaster.PNG)

# Task 10
Search the internet for sites that document optimization flags on compilers that you might use. For example, look for pages that talk about optimization flags on gcc or gfortran. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

## Solution
This site outlines the basics of complier optimization. Each flag such as -O1 , -O2 etc each then activate other flags. This is a scaling optimiaztion meanign that -O2 calls all the flags that -O1 does, and then also calls more flags. An important note is that these optimizations don't make compiling *faster*, they make the execution of the code faster. Another thing to remember while omptimizing, the higher you go, the more likely that the compiler is to make mistakes in the debugging information.

[https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html](https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html)
