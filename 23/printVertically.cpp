/* TODO: write a recursive function that prints the base 10 digits of n
 * vertically to cout.  for example, printVertically(2358) would print
 * 2
 * 3
 * 5
 * 8   */

#include <iostream>
using std::cout;
using std::endl;

void printVertically(int a);

int main(){
	printVertically(2358);
	return 0;
}

void printVertically(int a){
	if(a / 10 == 0){
		cout << a << endl;
		return;
	}
	printVertically(a/10);
	cout << a%10 << endl;
}