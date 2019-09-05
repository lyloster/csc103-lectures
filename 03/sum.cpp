#include <iostream>
using std::cin;
using std::cout;

int main (){
	double a, sum;
	
	cout << "Please enter numbers to be added together: \n";
	cin >> sum;

	while (cin >> a){
		sum += a;
	}

	cout << "The sum of all the numbers is: " << sum << "\n.";
	return 0;
}

