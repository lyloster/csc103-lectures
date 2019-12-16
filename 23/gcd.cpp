#include <iostream>
using std::cout;
using std::endl;

int gcd(int a, int b);

int main(){
	
	int a = 2;
	int b = 3;
	int greatestCommon = gcd(a,b);
	printf("a == %d, b == %d, greatestCommon == %d", a,b,greatestCommon);
	return 0;
}

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	return gcd(b, a%b);
}