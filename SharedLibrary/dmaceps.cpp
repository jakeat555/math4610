#include"errors.h"
void dmaceps(double &deps, int &ipow){
	double one = 1.0;
	double eps = 1.0;
	ipow = -1;
	double appone;
	double diff;
	for(int i = 0; i <1000; i++){
		appone = one + eps;
		abserr(diff,appone,one);
		if(diff == 0.0){
			return;
		}
		else{
			deps = diff;
			eps *= .5;
			ipow++;
		}
	}
}