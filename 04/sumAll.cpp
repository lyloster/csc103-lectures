#include <iostream>
using std::cin;
using std::cout;


// Adding to an existing sum using only two variables
int main(){
	int a, sum = 0;
	cout << "Please enter an  integer: \n";
	while (cin>>a){
		cout << "Please enter another integer: \n";
		sum += a;
	}

	cout << "The sum of all integers is: " << sum;
	return 0;
}
