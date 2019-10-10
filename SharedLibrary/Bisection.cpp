#include <math.h> 
#include <stdio.h> 
double f(double x){
	return x*x*x-5.3;
}

double bisect(double a,double b,double tol){
			//test f on [a,b]
			if(f(a)==0.0)
				return a;
			if(f(b)==0.0)
				return b;
			try{
				throw f(a)*f(b)>0.0;
			} 
			catch (bool b){
				if(b){
					printf("error in bounds");
				}
			}
			// compute the number of iteration
			double k = log((b-a)/tol)+1;
			double c = .5*(b+a);
			for(int i = 0; i < k; i++){
				c = .5*(b+a);
				printf("c%d\t%E\n",i,c);
				if(f(c)==0.0){
					printf("f(c):%E",f(c));
					return c;
				}
				else if(f(a)*f(c)<0.0){
					b =c;
				}
				else{ //(f(c)*f(b)<0)
					a=c;
				}
			}
			return c;
		}
		
int main(){
	printf("output: %E",bisect(0,2,.0001));
	return 0;
}