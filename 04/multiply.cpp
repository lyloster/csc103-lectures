#include <iostream> 
using std::cin;
using std::cout;
using std::endl;

int main() {
	int a, product;
	cout << "Please enter two integers: \n";
	cin >> product;
 	while (cin>>a){
		product *=a;	
		cout << "Please enter another integer: \n";
	}
	cout << "The product of all the integers is: " 
		<< product
		<< endl;
	return 0;
}
