//TODO: write a brute force test for perfect cubes
//Check if n = k^3 for some integer k


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isPerfCube (int n);

int main(){
	int n, perfectCube;
	cout << "Please enter an integer: " << endl;
	cin >> n;
	perfectCube = isPerfCube(n);
	if(perfectCube){
		cout << n << " is a perfect cube for some integer k" << endl;
	}else{
		cout << n << " is not a perfect cube for some integer k" << endl;
	}
	return 0;
}

bool isPerfCube (int n){
	for(int i = 1; i <= n; i++){
		if(n == (i*i*i)) return true;
	}
	
	return false;
}
