//TODO: write a loop that prints the sum of the first n odd cubes


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sumOfCubes (int n);

int main(){
	int n, sum;
	cout << "Please enter an integer: " << endl;
	cin >> n;
	sum = sumOfCubes(n);
	cout << "The sum of the fist " << n << " odd cubes is " << sum << endl;
	return 0;
}

int sumOfCubes (int n){
	int cube = 0;
	int sum = 0;
	for (int i = 1; i <=  n; i++){
		cout << "i is " << i << endl;
		cube = i*i*i;
		cout << "cube is" << cube << endl;
		if(cube%2 == 1){
			sum += cube;
			cout << "sum is " << sum << endl;
		}
	}
	return sum;
}
