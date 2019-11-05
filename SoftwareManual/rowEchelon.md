# Math 4610 Software Manual File

**Routine Name:** rowEchelon

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ rowEchelon.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o rowEchelon rowEchelon.cpp

**Description/Purpose:** This method transforms a matrix into that with form of row echelon. This means that the rows with all zeros are below those with other values and that pivot (leading coeffecient) of a non-zero row is to the left of the pivot in the row below it. 

**Input:** The input for this method is a rectangular matrix `(mxn)`

**Output:** The output for this methos is a rectangluar matrix `(mxn)` that is in row echelon form. To improve effectiency, old values in the lower triangle are not written over.

**Usage/Example:** Using the test matrix `A[][3] = { {3,2.7,5.5} , {0.01,4.5,3.1} , {5,2.1,9}}` we get the output
```
3.000000        2.700000        5.500000
0.010000        4.491000        3.081667
5.000000        -2.400000       1.480183
```
Again, note how `A[1][0]` and others are their origional values, meaning that they weren't changed to 


**Implementation/Code:** The following is the code for rowEchelon
```
void rowEchelon(double A[][3],int n){
	for(int k=0; k<n-1;k++){
		for(int i=k+1; i<n; i++){
			double factor = A[i][k] / A[k][k];
			for(int j=k+1;j<n; j++){
				A[i][j] = A[i][j] - factor*A[k][j];		
			}
		}
	}
}
```


**Last Modified:** November 2019
