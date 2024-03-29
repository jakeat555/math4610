# Math 4610 Software Manual Template File

**Routine Name:** relerr

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ relerr.f

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o relerr relerr.f

**Description/Purpose:** This is a function that provides the realitive error between an estimated and an actual value. This is defined as the absolute value of the difference of the two divided by the absolute value of the estimated value.

**Input:** The inputs for abserr one double, passed by refercence and two doubles, which are not passed by reference. Input eps is the epsilon that you are trying to calculate. There is also an overwritten function provided for passing in two floats by refrence. Input x and xe are the value and the estimated value respectivly.

**Output:** The output of relerr is the corresponding data type of the input, and is the absoute value of the diffrence of the inputs divided by the estimated value.

**Usage/Example:**

	relerr(eps,1.1,1.01)
	printf("The realitive error is: %f",eps);
		Output: "The absolute error is: .0891"
    
	relerr(eps,1.1,1.001)
	printf("The realitive error is: %f",eps);
		Output: "The absolute error is: .0989010989"


**Implementation/Code:** The following is the code for relerr()

	#include<cmath>
	double relerr(double x, double xe){
		return fabs(x - xe)/fabs(xe);
	}
	float relerr(float x, float xe){
		return fabs(x - xe)/fabs(xe);
	}

**Last Modified:** September/2019
