# Math 4610 Software Manual Template File

**Routine Name:** dmaceps

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ dmaceps.f

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o dmaceps dmaceps.f

**Description/Purpose:** This code is used to calculate the double precision error of a computer. Precision is the number of digits that a computer can hold with out loss of accuracy due to finite storage. Double precision is the ability for a computer to allocate more memory and thus digits before failure due to acurracy.

**Input:** The inputs are two numbers both passed by reference. The first, deps, is a double that holds the difference (AKA error) as the function iterates through to completion. The second variable, ipow, is an integer that represents how small the difference gets, that's to mean that it is iterated over, minimizing it until the differnce of the two numbers is indistinguable.

**Output:** There is no output for this code as all variables are passed by reference, but deps both and ipow are modified and updated to represent the minimum differnece and the correllating power by the completion of the function.

**Usage/Example:**
dmaceps(deps,-1);
printf("The output of dmaceps is:" deps);
    Output: "5.92342336792E-16"
    
This output means that there are 16 digits of precision until there is no guarentee of accuracy.


**Implementation/Code:** The following is the code for dmaceps()

void dmaceps(double &deps, int &ipow){
	double one = 1.0;
	double eps = 1.0;
	ipow = -1;
	double appone;
	double diff;
	for(int i = 0; i <1000; i++){
		appone = one + eps;
		diff = abserr(appone,one);
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


**Last Modified:** September/2019
