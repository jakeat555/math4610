#inlcude<cmath>

double bisect(double *f, double a, double b, double tol, int maxIter){
		double error;
		int iterationCounter;
		double val;
		
		if (f(a)==0.0){
			return a;
		}
		else if(f(b) == 0.0){
			return b;
		}
		
		val = f(a)*f(b);
		if(val >= 0.0){
			ERROR MESSAGE
		}
		
		error = 10.0*tol
		iterationCounter = 0;
		
		while(error > tol && iterationCounter<maxIter){
			c = .5*(a+b);
			if(f(c) == 0.0){
				return c;
			}
			else if(f(a)*f(c) < 0.0){
				b=c;
			}
			else{
				a=c;
			}
			error = b-a;
			return c;
		}
		
	}
	
double f(double x){
	return exp(x)
}	
int main(){
	bisect(f,1)
	
	return 0;
}