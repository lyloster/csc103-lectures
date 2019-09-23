#include <iostream>
using std::cin;
using std::cout;

//returns log(n)base 2 (returns exponent), if n is a power of 2
//returns -1, if n is not a power of 2  or n<=0
int findPower(int n);
//TODO: fix for even-odd-even-odd division
//2^^0 == 90
  int main(){
	int n;
	cout << "Please enter a number: \n";
	cin >> n;
	if (findPower(n) == -1) cout << n << " is not a power of 2. \n";
	else cout << "2 to the power of "  <<findPower(n) << " is equal to " << n << "\n";
	return 0;
}


int findPower(int n){
	if (n == 1) return  0;
	
  	if ((n%2 == 1)||  n <= 0){
		return -1;
	}

	return findPower(n/2) + 1;

}

