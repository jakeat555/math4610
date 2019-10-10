#include <stdio.h>
#include <math.h>

double f(double x){
	return x*cosh(x) + x*x*x - M_PI;
}

double g(double x){
	return x- .15*(x*cosh(x) + x*x*x - M_PI);
}

double fixedPt( double x0 , double tolerance , int maxIteration){
		double error = 10 * tolerance;
		double x1 = 0.0;
		int iteration = 0;
		
		while(error > tolerance & iteration < maxIteration){
			x1 = g(x0);
			printf("x%d \t g(x)=%E \n",iteration, x1);
			error = fabs(x1-x0);
			x0 = x1;
			if (++iteration >= maxIteration){
				printf("Error: too many iterations, error of %E at %d iteration\n",error, iteration);
			}
		}
		return x1;
	} 
	
int main(){
	printf("\nOutput: %E",fixedPt(1,.000001,100));
	return 0;
}