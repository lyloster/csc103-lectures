/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */

#include <iostream>
using namespace std;

int raiseToPower(int x, int n);

int main(){
	int product = raiseToPower(3,4);
	std::cout << product;
	return 0;
}

int raiseToPower(int x, int n){
	int product;
	if(n == 0) return 1;

	product = raiseToPower(x,n-1) * x;
	return product;
}