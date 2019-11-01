# Math 4610 Software Manual File

**Routine Name:** relErrorInf

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ relErrorInf.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o relErrorInf relErrorInf.cpp

**Description/Purpose:** This method computes the relitive erorr between two vectors using the Infinty-Norm calculation found [here](https://github.com/jakeat555/math4610/blob/master/SoftwareManual/length_Inf.md).
This includes dividing the result by the size of the solution vector to get an error *relititve* to the approximate solution.

**Input:** The input of this method are two vectors, the first being an approximation of the second, which is the root.

**Output:** The output of this method is a double scaled by a factor of the size of the root vector.

**Usage/Example:** Using this method on the vector `x = <7.1, 5.0, 16.34, 8.001>` and `x* = {7, 5, 16, 8}` you get
```
Realitive error norm Inf: 0.021250
```

**Implementation/Code:** The following is the code for relError2
```
double relErrorInf(std::vector<double>x, std::vector<double>xStar,int n){	
	double max=-DBL_MAX;
	double xStarSize = max;
	// find size of error vector using Inf-norm
	for(int i=0; i<n; i++){
		double diff =x[i]-xStar[i];
		if(diff>=max){
			max = diff;
		}
		if(xStar[i]>xStarSize){
			xStarSize = xStar[i];
		}
	}
	return max/xStarSize;
}
```


**Last Modified:** October/2019
