#include <iostream> 
using std::cin;
using std::cout;

#include <cmath>
//cmath: pow, sqrt, abs, labs, fabs, ceil, floor, exit, rand, srand

//take a number a to a power b and retuns result
int main(){
	double a,b;
	cout << "Please enter two numbers: \n";
	cin >> a >> b;
	cout << a << " to the power of " <<b << " is equal to " << pow(a,b) << "\n";
	return 0;
}
