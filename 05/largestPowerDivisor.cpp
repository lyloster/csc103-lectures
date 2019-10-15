//For integers n and k, determine the largest power of k that divides n

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int evenlyDivides(int n, int k);

int main(){
	int n, k, power;
	cout << "Please eneter two positive numbers: " << endl;
	cin >>n >> k;
	power = evenlyDivides(n,k);
	if(power = -1){
		cout << "1 to the 1 power evenly divides " << n << endl;
	}else{
		cout << k << " to the " << power << " power evenly divides " << n << endl;
	}
	return 0;
}

int evenlyDivides(int n, int k){
	int counter = 0;
	if(k == 1) return -1;
	while(n%k==0){
		n/=k;
		counter++;
		cout << counter << endl;
	}
	return counter;
}
