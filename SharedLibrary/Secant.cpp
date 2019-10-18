#include <stdio.h>
#include <math.h>

double f(double x){
	return x*x*x - x*x + 15;
}

double fPrime(double x){
	return 3*x*x - 2*x;
}

double Secant(double x0,double x1, double tol, double maxIter){
	int iter = 0;
	while(fabs(x1-x0) > tol && iter < maxIter){
		iter++;
		double x2 = x1 - (f(x1)*(x1-x0)) / (f(x1)-f(x0));
		x0 = x1;
		x1 = x2;
		printf("x0: %E\t x1: %E\t\n", x0,x1);
	}
	return x1;
}

int main(){
	printf("Output from Secant Method: %E\n",Secant(-3,0,.00001,100));
	return 0;
}