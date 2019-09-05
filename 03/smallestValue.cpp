#include <iostream>
using std::cin;
using std::cout;

int main(){
	int smallest, a;
	
	cout << "Please enter some integer numbers: \n";
	cin >> smallest;

	while (cin >> a){
		if (a < smallest){
			smallest = a;
		}
	}

	cout << "\nThe smallest number is: " << smallest << ".\n";

	return 0;
}

