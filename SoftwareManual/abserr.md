# Math 4610 Software Manual Template File

**Routine Name:** abserr

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ abserr.f

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o abserr abserr.f

**Description/Purpose:** This code is meant to evaluate the absolute error of two numbers, defined to be the absolute value of the difference of the two.

**Input:** The inputs for abserr are two doubles, which are not passed by reference. Input eps is the epsilon that you are trying to calculate. There is also an overwritten function that does performs the same operations on two floats passed in by refrence. Input x and xe are the value and the estimated value respectivly.

**Output:** The output of abserr is the corresponding data type of the input, and is the absoute value of the diffrence of the inputs.

**Usage/Example:**

	abserr(eps,1.1,1.01)
	printf("The absolute error is: %f",eps);
		    Output: "The absolute error is: 0.09"
    
	abserr(eps,1.1,1.001)
	printf("The absolute error is: %f",eps);
    		Output: "The absolute error is: .099"

**Implementation/Code:** The following is the code for abserr()
	
	#include<cmath>
	double abserr(double &eps, double x, double xe){
		return dabs(x - xe);
	}
	float abserr(float x, float xe){
		return fabs(x - xe);
	}


**Last Modified:** September/2019
