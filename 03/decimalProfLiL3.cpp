#include <iostream>
using std::cout;
using std::endl;
using std::ios;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	cout<<"1/11 is "<<(1./11.)<<endl;
		return 0;
}
