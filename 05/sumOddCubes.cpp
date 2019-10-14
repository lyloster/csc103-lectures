//TODO: write a loop that prints the sum of the first n odd cubes


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sumOfCubes (int n);
bool isOddCube (int cube);

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
	int i = 1;


while(n >= 0){
	cube = i*i*i;
	if(isOddCube(cube)){
		sum += cube;
		n--;
	}
	i++;
	return sum;
}
}

bool isOddCube (int cube){
	if(cube % 2 == 1) return true;
	else return false;
}
