#include"errors.h"
void smaceps(float &seps, int &ipow){
	float one = 1.0;
	float eps = 1.0;
	ipow = -1;
	float appone;
	float diff;
	for(int i = 0; i <1000; i++){
		appone = one + eps;
		abserr(diff,appone,one);
		if(diff == 0.0){
			i=1000;
		}
		seps = diff;
		eps *= .5;
		ipow++;
	}
}