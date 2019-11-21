#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <set>
using std::set;

/* write a function that returns the union of two sets */

void unionTest();
set<int> unionSet(const set<int>& S1, const set<int>& S2);

int main(){
	unionTest();
	return 0;
}

set<int> unionSet(const set<int>& S1, const set<int>& S2){
	set<int> u;
	for(set<int>::iterator i = S1.begin(); i != S1.end(); i++){
		for(set<int>::iterator j = S2.begin(); j != S2.end(); j++){
			u.insert(*i);
			u.insert(*j);
		}
	}
	return u;
}

void unionTest() {
	set<int> s1 = {2,3,4,5,6,7};
	set<int> s2 = {1,2,4,7,11,44};
	set<int> s3 = unionSet(s1,s2);
	cout << "union contains: ";
	for (set<int>::iterator i = s3.begin(); i != s3.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n";
}