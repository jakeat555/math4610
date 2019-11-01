# Math 4610 Software Manual File

**Routine Name:** absError1

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ absError1.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o absError1 absError1.cpp

**Description/Purpose:** This method computes the absolute erorr between two vectors using the 1-Norm calculation found [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_1.md).

**Input:** The input of this method are two vectors, the first being an approximation of the second, which is the root.

**Output:** The output of this method is a double, which is the error value.

**Usage/Example:** Using this method on the vector `x = <7.1, 5.0, 16.34, 8.001>` and `x* = {7, 5, 16, 8}` you get
```
Absolute error norm 1: 0.441000
```

**Implementation/Code:** The following is the code for absError1
```
double absError1(std::vector<double>x, std::vector<double>xStar,int n){	
	double sum;
	// find size of error vector using 1-norm
	for(int i=0; i<n; i++){
		double diff =x[i]-xStar[i];
		sum = sum + diff;
	}
	return sum;
}
```


**Last Modified:** October/2019
