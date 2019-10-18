#include <stdio.h>
#include <math.h>

double f(double x){
	return x*x*x - x*x + 15;
}

double fPrime(double x){
	return 3*x*x - 2*x;
}

double Newton(double x0,double tol, double maxIter){
	double error = 10*tol;
	int iter = 0;
	while(error > tol && iter < maxIter){
		iter++;
		double h = f(x0)/fPrime(x0);
		error = fabs(h);
		x0 -= h;
		printf("x0:%E at step %d\n",x0,iter-1);
	}
	return x0;
}

int main(){
	printf("Output from Newtons Method: %E\n",Newton(3,.00001,100));
	return 0;
}