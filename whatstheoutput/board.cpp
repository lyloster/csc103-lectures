#include <iostream>
using std::cout;
using std::endl;

int main(){
	int x = 5;
	int y = x;
	cout << "x == " << x << " and y == " << y << endl;

	y = 10;
	cout << "x == " << x << " and y == " << y << endl;

	int a = 5;
	int* b = &a;
	cout << "a == " << a << " and b == " << *b << endl;

	*b = 10;
	cout << "a == " << a << " and b == " << *b << endl;

	int n = 5;
	int& m = n;
	cout << "n == " << n << " and m == " << m << endl;

	n = 10;
	cout << "n == " << n << " and m == " << m << endl;

	return 0;
}