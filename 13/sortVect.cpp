/* TODO: you can use sets to sort a vector or an array.  Try it maybe. */


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <set>
using std::set;
#include <vector>
using std::vector;

set<int> sortVec(const vector<int>& v);
//size needs to be passed as a parameter
//all info for the size when an unsized array is passed is lost
//another way to pass the info is if you pass a reference to the array
set<int> sortArr(int a [], int size);

int main(){
	int a []= {1 , 3, 3, 3 ,3 ,53, 4};
	//number of bytes allocated for the array 
	//divided by the size of each element in the array
	//to get the length of the array
	int size = sizeof(a)/sizeof(*a);
	vector<int> v;
	set<int> s;
	int n;
	cout << "Please enter some numbers: " << endl;
	while(cin >> n){
		v.push_back(n);
	}
	s = sortVec(v);

	for(set<int>::iterator i = s.begin(); i != s.end();i++){
		cout << *i << "\t";
	}
	cout << endl;
	s = sortArr(a, size);

	for(set<int>::iterator i = s.begin(); i != s.end();i++){
		cout << *i << "\t";
	}

	return 0;
}

set<int> sortVec(const vector<int>& v){
	set<int> s;
	for(int i = 0; i < v.size(); i++){
		s.insert(v[i]);
	}
	return s;
}


set<int> sortArr(int a [], int size){
	set<int> s;

	for(int i = 0; i < size; i++){
		s.insert(a[i]);
	}
	return s;
}