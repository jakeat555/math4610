# Math 4610 Software Manual File

**Routine Name:** SAXPY

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ SAXPY.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o SAXPY SAXPY.cpp

**Description/Purpose:** SAXPY is an acronym for Single Presision A dot X Plus Y. This means that it computes the scalar multiple of a vector (A dot X), then adds it another vector (Y) to get the resulting Z vector.

**Input:** This codes needs an input of a vector `x` and its scaling factor `a`, as well as a vector `y` to add, and `n`, the length of `x` and `y`.

**Output:** This code outputs a vector of doubles that is the result of scaling a vector, then adding another vector

**Usage/Example:** Using `x= {22.3, 235, 65.4}` and `y= {29.1, 5, 6.4}` and `a = 3.2` and `n = 3` you get the following output
```
SAXPY: <100.460000,757.000000,215.680000>
```

**Implementation/Code:** The following is the code for SAXPY()
```
void SAXPY(double x[], double y[], double z[],  double a, int n){
	for(int i=0; i<n; i++){
		z[i]=x[i]*a+y[i];
	}
}
```


**Last Modified:** November/2019
