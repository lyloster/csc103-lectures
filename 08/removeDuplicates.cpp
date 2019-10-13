//Given a vector V of sorted integers, write code that creates another vector U which is like
//V, but without duplicate elements. For example, if the input is V = [1,2,2,3,3,3],
//then U should be set to contain [1,2,3].

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

vector <int> removeDuplicates(const vector<int>& v);

int main(){
vector <int> v, noDuplicates;
	int n;
	cout << "Please enter some numbers separated by space: " << endl;
	while(cin>>n){
		v.push_back(n);
	}
	noDuplicates = removeDuplicates(v);
	cout << "These are the numbers that you enetered in reversed order : " << endl;

	for(int i = 0; i < noDuplicates.size(); i++){
		cout << noDuplicates[i] << " "; 
	}

	return 0;
}

vector <int> removeDuplicates(const vector<int>& v){
	vector<int> noDuplicates;
	for(int i = 0; i<v.size(); i++){
		if(v[i] != v[i+1]){
			noDuplicates.push_back(v[i]);
		}
	}
	return noDuplicates;
}