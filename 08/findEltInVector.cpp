//Write a function bool search(const vector<int>& V, int x); 
//that searches vector V for value x

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

bool search(const vector <int>& V, int x);

int main (){
	vector<int> numbers = {2 , 4, 90, 84, 0, 53, 23, 54, 66, 71, 82, 93};
	int x;
	bool inNumbers;
	cout << "Please enter a number to see if it is in the string of numbers I have:" << endl;
	cin >> x;
	
	inNumbers = search(numbers,x);
	if(inNumbers){
		cout << x << " is in the string of numbers." << endl;
	}else{
	cout << x << " is not in the string of numbers." << endl;
}

	return 0;
}

bool search(const vector <int>& V, int x){
	bool inVector;

	for(int i = 0; i < V.size(); i++){
		if(x == V[i]){
			return true;
		}
	}
	return false;
}