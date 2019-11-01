# Math 4610 Software Manual File

**Routine Name:** relError1

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ relError1.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o relError1 relError1.cpp

**Description/Purpose:** This method computes the relitive erorr between two vectors using the 1-Norm calculation found [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_1.md).
This includes dividing the result by the size of the solution vector to get an error *relititve* to the approximate solution.

**Input:** The input of this method are two vectors, the first being an approximation of the second, which is the root.

**Output:** The output of this method is a double scaled by a factor of the size of the root vector.

**Usage/Example:** Using this method on the vector `x = <7.1, 5.0, 16.34, 8.001>` and `x* = {7, 5, 16, 8}` you get
```
Realitive error norm 1: 0.012250
```


**Implementation/Code:** The following is the code for relError1
```
double relError1(std::vector<double>x, std::vector<double>xStar,int n){	
	double sum;
	double xStarSize;
	// find size of error vector using 1-norm
	for(int i=0; i<n; i++){
		double diff =x[i]-xStar[i];
		sum = sum + diff;
		// help find size of x* vector using 1-norm
		xStarSize += xStar[i];
	}
	return sum/xStarSize;
}
```


**Last Modified:** October/2019
