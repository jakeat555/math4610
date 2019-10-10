# Math 4610 Software Manual File

**Routine Name:** smaceps

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ smaceps.f

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o smaceps smaceps.f

**Description/Purpose:** This code is used to calculate the single precision error of a computer. Precision is the number of digits that a 
computer can hold with out loss of accuracy due to finite storage. Single precision is the normal amount of memory 
(depending on the system)  dedicated to storing digits before there aren't enough and it failure due to acurracy loss.

**Input:** The inputs are two numbers both passed by reference. The first, deps, is a float that holds the difference (AKA error)
as the function iterates through to completion. The second variable, ipow, is an integer that represents how small the difference gets,
that's to mean that it is iterated over, minimizing it until the differnce of the two numbers is indistinguable.

**Output:** There is no output for this code as all variables are passed by reference, but deps both and ipow are modified and updated
to represent the minimum differnece and the correllating power by the completion of the function.

**Usage/Example:**
```
dmaceps(seps,-1);
printf("The output of smaceps is:" seps);
    Output: "5.92342336792E-16"
```
    
This output means that there are 16 digits of precision until there is no guarentee of accuracy.


**Implementation/Code:** The following is the code for smaceps()

	void smaceps(float &seps, int &ipow){
		float one = 1.0;
		float eps = 1.0;
		ipow = -1;
	
		//iterate many times to find the eps closest to 1.0
		for(int i = 0; i <1000; i++){
			float appone = one + eps;
			double diff;
			abserr(diff,appone,one);
			if(diff == 0.0){
				i=1000;
			}
			seps = diff;
			eps *= .5;
			ipow++;
		}
	}


**Last Modified:** September 2019
