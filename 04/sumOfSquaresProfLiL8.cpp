#include <iostream>
using std::cin;
using std::cout;

int sumOfSquares(int a);

int main(){
	int a, sum;
	cout << "Please enter an upper bound (inclusive) for the calculation: \n";
	cin >> a;
	sum = sumOfSquares(a);
	cout << "The sum of the squares of all numbers including " << a << " is " << sum << "\n";
	return 0;
}

int sumOfSquares(int a){
	int sum = 0;
	if (a <= 0){
		return sum;
	}

	return sum = a*a + sumOfSquares(a-1);
}

