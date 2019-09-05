#include <iostream>
using std::cin;
using std::cout;

int main() {
	int a, smallest, secondSmallest;

	cout << "Please enter some numbers: \n";
	cin >> smallest;
	cin >> secondSmallest;
	if (secondSmallest < smallest){
		a = secondSmallest;
		secondSmallest = smallest;
		smallest = a;
	}

	while (cin >> a){
		if ( a > smallest && a<secondSmallest){
			secondSmallest = a;
		}else if ( a < smallest){
		 	secondSmallest = smallest;
			smallest = a;
		}
	}

	cout << "The smallest number is: " << smallest << "\n"
		<<"The second smallest number is: " << secondSmallest << "\n"
		<< "a is " << a << "\n";
	return 0;
}

