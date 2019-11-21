#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//compute Fibonacci non-recursively
//prevSum = a(n-1)
//nSum = a(n)
//nextSum = a(n+1)
//toAdd --> input
//nTimes to compute Fibonacci

int main(){
	int prevSum, nSum, nextSum,toAdd, nTimes;
	prevSum = 1;
	nSum = 1;
	nextSum = 2;
	nTimes = 1;
	cout << "Please enter a number to compute Fibonacci(n): \n";
	cin >> toAdd;
  	while(nTimes<toAdd){
		nTimes  ++;
		prevSum = nSum;
		nSum = nextSum;
		nextSum = prevSum + nextSum;
	}

	cout << "Fibonacci of " << toAdd << " is equal to " << nSum << endl;
	return 0;
}
