#include<cmath>
#include"errors.h"
void abserr(double &eps, double x, double xe){
	eps = fabs(x - xe);
}
void abserr(float &eps, float x, float xe){
	eps = fabs(x - xe);
}