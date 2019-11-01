# Math 4610 Software Manual File

**Routine Name:** length_Inf

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ length_Inf.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o length_Inf length_Inf.cpp

**Description/Purpose:** This function is used to compute the length of a vector using the Infinty-norm calculation, meaning that the largest element is found.

**Input:** This fucntion takes an input of a vector filled with doubles.

**Output:** The output of this function is a single double that is the maximum of all elements in the vector.

**Usage/Example:** Calling this method on the vector `x=<7.1, 5.0, 16.34, 8.001>` gives the output
```
Length of vector using Infinity-norm: 16.340000
```

**Implementation/Code:** The following is the code for length_1.cpp
```
double length_Inf( std::vector<double> x){
	double max;
	for(int i = 0; i < x.size(); i++){
		if(x[i] > max){
			max = x[i];
		}
	}
	return max;
}
```


**Last Modified:** October/2019
