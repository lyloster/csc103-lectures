#include <iostream>
using std::cout;
using std::cin;

int main() {
	int a, b, temp;
	cout << "Please enter two integer numbers: \n";
	cin >> a
		>> b;
	cout << "Swapping numbers now. \n";
	temp = a;
	a = b;
	b = temp;
	cout << "The two numbers are: " << a << " and " << b << "\n";
	return 0;
}
