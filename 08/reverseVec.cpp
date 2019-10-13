//Write a function void reverse(vector<int>& V); that reverses the order of the elements of V

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

vector<int> reverse(vector<int>& V);

int main(){
	vector <int> v, reversedV;
	int n;
	cout << "Please enter some numbers separated by space: " << endl;
	while(cin>>n){
		v.push_back(n);
	}
	reversedV = reverse(v);
	cout << "These are the numbers that you enetered in reversed order : " << endl;

	for(int i = 0; i < reversedV.size(); i++){
		cout << reversedV[i] << " "; 
	}

	return 0;
}

vector<int> reverse(vector<int>& V){
	vector<int> vReversed;
	for(int i = 0; i < V.size(); i++){
	    
		vReversed.push_back(V[V.size()-1-i]);
	}
	return vReversed;
}