# Math 4610 Software Manual File

**Routine Name:** length_2

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ length_2.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o length_2 length_2.cpp

**Description/Purpose:** This function is used to compute the length of a vector using the 2-norm calculation, meaning that the square of each element is summed and then that sum is squarerooted.

**Input:** This fucntion takes an input of a vector filled with doubles.

**Output:** The output of this function is a single double that is the sum of all elements

**Usage/Example:** Calling this method on the vector `x=<7.1, 5.0, 16.34, 8.001>` gives the output
```
Length of vector using 2-norm: 20.159901
```

**Implementation/Code:** The following is the code for length_1.cpp
```
double length_2( std::vector<double> x){
	double sum;
	for(int i = 0; i < x.size(); i++){
		sum += x[i]*x[i];
	}
	return sqrt(sum);
}
```


**Last Modified:** October/2019
