#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

void removeDuplicates(vector<int>& v);
void swap(int& a, int& b);

int main(){
vector <int> v;
	int n;
	cout << "Please enter some numbers separated by space: " << endl;
	while(cin>>n){
		v.push_back(n);
	}
	removeDuplicates(v);
	cout << "These are the numbers that you enetered in order : " << endl;

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " "; 
	}

	return 0;
}

void removeDuplicates(vector<int>& v){

	int a = 0;
	int b = 1;

	while(b != v.size()){
		
		if(v[a] != v[b]){
			swap(v[a+1],v[b]);
			a++;
		}
		b++;
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	//how many to remove
	//b has been incremented one additional time in while loop
	int n = b - a - 1;

	for(int i = 0; i < n; i++){
		v.pop_back();
	}
	return;
}

void swap(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
}