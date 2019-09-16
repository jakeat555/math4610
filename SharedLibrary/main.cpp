#include"errors.h"
int main(){
	float seps = 1.0;
	int ipow = 0;
	smaceps(seps,ipow);
	float tval = pow(1.0/2.0,ipow+1);
	std::cout << "Output from smaceps: ";
	std::cout << tval;
	std::cout << " at power: ";
	std::cout << ipow;
	std::cout << "\n";

	double deps = 1.0;
	int dipow = 0;
	dmaceps(deps,dipow);
	double tol = pow(1.0/2.0,dipow+1);
	std::cout << "Output from dmaceps: ";
	std::cout << tol;
	std::cout << " at power: ";
	std::cout << dipow;
	std::cout << "\n";
	
	return 0;
}