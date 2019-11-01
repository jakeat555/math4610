# Math 4610 Software Manual File

**Routine Name:** dotProduct

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ dotProduct.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o dotProduct dotProduct.cpp

**Description/Purpose:** The dot product is a method that determines the closness to orthgonality two vectors are.

**Input:** This method takes as input, two vectors filled with doubles that are of equal length and an integer, representing their length.

**Output:** As output, this program returns a double, which is the dot product.

**Usage/Example:** For example, using `x= {22.3, 235, 65.4}` and `y = {29.1, 5, 6.4}` we get the output
```
Dot Product: 2242.490000
```
**Implementation/Code:** The following is the code for dotProduct
```
double dotProduct(double x[], double y[], int n){
	double sum = 0;
	for(int i=0; i<n;i++){
		sum += x[i]*y[i];
	}
	return sum;
}
```

**Last Modified:** November 2019
