//Given a vector of integers V, write code that creates a new vector E which contains only
//the even elements of V. That is, if V = {1,3,5,2,7,8}, then W should be {2,8}.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

vector<int> returnEvens(const vector<int>& v);

int main(){
	vector <int> v, onlyEvens;
	int n;
	cout << "Please enter some numbers separated by space: " << endl;
	while(cin>>n){
		v.push_back(n);
	}
	onlyEvens= returnEvens(v);
	cout << "These are the numbers that you enetered in reversed order : " << endl;

	for(int i = 0; i < onlyEvens.size(); i++){
		cout << onlyEvens[i] << " "; 
	}
	return 0;
}

vector<int> returnEvens(const vector<int>& v){
	vector<int> onlyEvens;
	for(int i = 0; i < v.size(); i++){
		if(v[i]%2==0){
			onlyEvens.push_back(v[i]);
		}
	}
	return onlyEvens;
}