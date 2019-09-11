#include <iostream>
using std::cin;
using std::cout;

/* +, -, *, / two numbers and returns the result */

/*NOTE: There is no compiling error if break; is omitted in any of the cases. Code will execute until a break is encountered.
 * NOTE: default statement is optional
 * */


int main(){
	double a,b;
	char op;
	cout << "Please enter an arithemetic expression: \n";
	cin >> a >> op >> b;



	switch(op){
		case '+':
			cout << "The result is " << a+b << "\n";
			break;
		case '-':
			cout << "The result is " << a-b << "\n";
			break;
		case '*':
			cout << "The result is " << a*b << "\n";
			break;
		case '/':
			cout << "The result is " << a/b << "\n";
			break;
		default:
			cout << "Sorry, I don't understand the operator " << op << "\n";
	}

	cout << "Bye!\n";
	return 0;
}
