# Math 4610 Software Manual File

**Routine Name:** absError2

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ absError2.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o absError2 absError2.cpp

**Description/Purpose:** This method computes the absolute erorr between two vectors using the 2-Norm calculation found [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_2.md).

**Input:** The input of this method are two vectors, the first being an approximation of the second, which is the root.

**Output:** The output of this method is a double, which is the error value.

**Usage/Example:** Using this method on the vector `x = <7.1, 5.0, 16.34, 8.001>` and `x* = {7, 5, 16, 8}` you get
```
Absolute error norm 2: 0.354402
```

**Implementation/Code:** The following is the code for absError2
```
double absError2(std::vector<double>x, std::vector<double>xStar,int n){	
	double sum;
	// find size of error vector using 2 norm
	for(int i=0; i<n; i++){
		double diff =x[i]-xStar[i];
		sum = sum + diff*diff;
	}
	return sqrt(sum);
}
```


**Last Modified:** October/2019
