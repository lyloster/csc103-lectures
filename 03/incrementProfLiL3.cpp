#include <iostream>
using std::cout;
using std::endl;

//difference between a++ and ++a

int main(){
	//b = a;
	//a = a+1;
	int a = 5;
	int b = a++;
	cout<<b<<endl;

	//c = c+1;
	//d = c;
	int c = 5;
	int d = ++c;
	cout<<d<<endl;
	return 0;
}
