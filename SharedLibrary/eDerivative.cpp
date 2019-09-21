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
	}
	printf("Derivitive of e^x at pi is: %f",fPrime);
	return 0;
}