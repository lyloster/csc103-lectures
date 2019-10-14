//Sum the squares of all integers fro 1..100, 
//i.e. compute 1+4+9+...+10000

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sumOfSquares(int n);

int main(){
	int n, sum;
	cout << "Please enter an integer: " << endl;
	cin >> n;
	sum = sumOfSquares(n);
	cout << "The sum of the squares of integers upto " << n << " is " << sum << endl;
	return 0;
}

int sumOfSquares(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum+=i*i;
	}
	return sum;
}