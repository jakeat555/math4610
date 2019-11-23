# Math 4610 Software Manual File

**Routine Name:** steepestDescent

**Author:** Jacob Johns

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ steepestDescent.cpp

will produce an executable **./a.exe** than can be executed. If you want a different name, the following will work a bit
better

    g++ -o steepestDescent steepestDescent.cpp

**Description/Purpose:** This method uses the steepest descent method to solve a set of linear equations. This is implemented by finding and going perpendicular to the level curve that the current approximation is on. Note the use of the transpose dot product, which is a method that computes the dot product of the transpose of a vector and a nother vector (not computing the transpose save computation time).

**Input:** As input, this function needs a matrix `A` and it's solution vector `b`.

**Output:** This method will output a solution vector `x` that satisfies `Ax=b` within a tolerance level.

**Usage/Example:** To test this method, a [diagonally dominant matrix](https://github.com/jakeat555/math4610/edit/master/SoftwareManual/generateDiagDom.md) was generated
```
4.935236        0.347402        0.939336        0.191234
0.347402        4.242094        0.162313        0.635364
0.939336        0.162313        4.735944        0.132479
0.191234        0.635364        0.132479        4.987807
```
and the solution vector `b = {-1,7,-7,0}` was used. This produced the output
```
Orthogniality check: 0= 99.000000
Iteration 1: x = <-0.226421,1.584944,-1.584944,0.000000>
Orthogniality check: 0= 2.270649
Iteration 2: x = <-0.016291,1.706854,-1.493052,-0.150039>
Orthogniality check: 0= 0.064641
Iteration 3: x = <-0.033039,1.727984,-1.528207,-0.177856>
Orthogniality check: 0= 0.002965
Iteration 4: x = <-0.026679,1.736315,-1.525915,-0.178253>
Orthogniality check: 0= 0.000127
Iteration 5: x = <-0.027524,1.737261,-1.527256,-0.179664>
Orthogniality check: 0= 0.000006
Iteration 6: x = <-0.027272,1.737653,-1.527123,-0.179678>
Orthogniality check: 0= 0.000000
Iteration 7: x = <-0.027319,1.737698,-1.527175,-0.179743>
Orthogniality check: 0= 0.000000
Iteration 8: x = <-0.027309,1.737717,-1.527167,-0.179744>
Orthogniality check: 0= 0.000000
Iteration 9: x = <-0.027312,1.737719,-1.527169,-0.179747>
```



**Implementation/Code:** The following is the code for steepestDescent
```
void steepestDescent(double A[][4], double xOld[] , double b[], double tol, int maxIter, int n){
		//r0 = b-Ax0 a vector
		double rOld[n] = {0};
		leftMultiply(A,xOld,rOld,n);
		difference(b,rOld,rOld,n);
		
		//delta = r0^Tr0 a value
		double delta = transposeDotProduct(rOld,rOld,n);
		
		//k=0 an iteration counter
		int k=0;
		
		//b_delta = b^Tb a value
		double b_delta = transposeDotProduct(b,b,n);
		
		while (delta > tol*tol*b_delta && k < maxIter){
			//s_k = ArOld a vector
			double s[n] = {0};
			leftMultiply(A,rOld,s,n);
			
			//alpha = (rOld^TrNew) / (rOld^Ts); a value (step size)
			double alpha = transposeDotProduct(rOld,rOld,n) / transposeDotProduct(rOld,s,n);
			
			//x_New = xOld + alpha * rOld; a vector (new approximation)
			double xNew[n] = {0};
			SAXPY(rOld,xOld,xNew,alpha,n);
			
			//rNew = rOld - alpha*s; a vector (new residual)
			double rNew[n] = {0};
			SAXPY(s,rOld,rNew,-alpha,n);
			
			printf("Orthogniality check: 0= %f\n", delta);
			
			//delta = rNew^TrNew a value
			delta = transposeDotProduct(rNew,rNew,n);
			
			//r_k = r_{k+1} a vector seting old residual as new
			
			for(int i=0; i<n; i++){
				rOld[i] = rNew[i];
				xOld[i] = xNew[i];
			}
			//k = k+1; a value, increase counter
			k++;
			
			printf("Iteration %d: x = <%f,%f,%f,%f>\n",k, xNew[0],xNew[1],xNew[2],xNew[3]);
		}
}
```


**Last Modified:** November 2019
