#include<cmath>
#include"errors.h"
void relerr(double &eps, double x, double xe){
	eps = fabs(x - xe)/fabs(xe);
}
void relerr(float &eps, float x, float xe){
	eps = fabs(x - xe)/fabs(xe);
}