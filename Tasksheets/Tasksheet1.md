## Tasksheet 1

# Task 1

If you got this far, you may have stumbled upon my page [https://jakeat555.github.io/](https://jakeat555.github.io/)

It's not pretty but it sure does exist.

# Task 2

I'm pretty sure it's private, and I'm pretty sure that you're already here but...

My GitHub repository for MATH 4610 is [https://github.com/jakeat555/math4610](https://github.com/jakeat555/math4610)

# Task 3

The command line environment I will be using is Cygwin

# Task 4

The executible is [here](https://github.com/jakeat555/math4610/blob/master/SharedLibrary/NameOfCode.exe)

Download it and run using ./NameOfCode.exe!

# Task 5

The table of contents for all homeworks can be found here: [Table of Contents](https://github.com/jakeat555/math4610/blob/master/Tasksheets/TableOfContents.md)

# Task 6

This is a program that computes the derivite of e^(sin(x)) at x=pi with the central diffrence

  ```
  #include<math.h>
#include<stdio.h>
double f(double x){
	return exp(sin(x));
}
int main(){
	double tol = .00001;
	double error = 10*tol;
	int iter = 0;
	int maxIter=100;
	double h = 1.0;
	double fPrime;
	while(error>tol && iter < maxIter){
		fPrime = (f(M_PI+h)-f(M_PI-h))/(2*h);
		error = fabs(fPrime+f(M_PI));
		// When shared library works use: error = abserr(fPrime,f(M_PI));
		iter++;
		h *=.5;
		if( h == 0.0){
			iter = maxIter;
		}
		printf("fPrime: %f and error: %E \n", fPrime, error );
	}
	printf("Derivitive of e^sinx at pi is: %f",fPrime);
	return 0;
}
```
This code works by taking an approximation of the derivitive and then evaluating it and the error around it. Currently, the code stops
when the error is ±.00001 (the tol) or when machine error stops it. Running this code will output

```
fPrime: -0.944350 and error: 5.564956E-02
fPrime: -0.996007 and error: 3.992665E-03
fPrime: -0.999742 and error: 2.577016E-04
fPrime: -0.999984 and error: 1.623365E-05
fPrime: -0.999999 and error: 1.016590E-06
Derivitive of e^sinx at pi is: -0.999999
```
  

# Task 7 (Functions are done, but shared library is not)

The absolute error between a number and an approximation of that number: [abserr](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/abserr.md)

The relative error between a number and an approximation of that number: [relerr](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/relerr.md)

# Task 8 (Functions are done, but shared library is not)

The Double Machine Epsilon code is named [dmaceps](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/dmaceps.md)

The Single Machine Epsilon code is named [smaceps](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/smaceps.md)

# Task 9

This program is called eDerivative and is found below and [here](https://github.com/jakeat555/math4610/blob/master/SharedLibrary/eDerivative.cpp)

```
#include<math.h>
#include<stdio.h>
double f(double x){
	return exp(x);
}
int main(){
	double tol = .00001;
	double error = 10*tol;
	int iter = 0;
	int maxIter=100;
	double h = 1.0;
	double fPrime;
	while(error>tol && iter < maxIter){
		fPrime = (f(M_PI+h)-f(M_PI-h))/(2*h);
		error = fabs(fPrime-f(M_PI));
		// When shared library works use: error = abserr(fPrime,f(M_PI));
		iter++;
		h *=.5;
		if( h == 0.0){
			iter = maxIter;
		}
		printf("fPrime: %f and error: %E \n", fPrime, error );
	}
	printf("Derivitive of e^x at pi is: %f",fPrime);
	return 0;
}
```
Upon completion of running this code, the output should be
```
fPrime: 27.194970 and error: 4.054277E+00
fPrime: 24.117013 and error: 9.763200E-01
fPrime: 23.382496 and error: 2.418033E-01
fPrime: 23.201002 and error: 6.030932E-02
fPrime: 23.155761 and error: 1.506850E-02
fPrime: 23.144459 and error: 3.766573E-03
fPrime: 23.141634 and error: 9.416087E-04
fPrime: 23.140928 and error: 2.354000E-04
fPrime: 23.140751 and error: 5.884987E-05
fPrime: 23.140707 and error: 1.471246E-05
fPrime: 23.140696 and error: 3.678114E-06
Derivitive of e^x at pi is: 23.140696

```
# Task 10
Absolute errors are different from relitive erros only by a factor of `1/x*` where `x*` is the actual value. This means that in any case where `x*` is near 0, there will be little value in computing the realitive error. But for cases where `x*` is larger, there is more value in the relitive error as it uses the factor of `1/x` to represent the error *relitive* to the value. Often, when dealing with large numbers, an error of 1,000 would be fine. For example, if you're taking a world census, 7,731,913,000 ± 1,000 people is amazing. But if you're measuring the height of your growing kid 52 ± 1,000 inches is just going to dissapoint them.
https://en.wikipedia.org/wiki/Approximation_error
