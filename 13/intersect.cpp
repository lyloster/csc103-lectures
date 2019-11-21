/* compute the intersection of two sets.
 * Recall that the intersection of two sets is the set
 * consisting of the elements they have in common.  E.g.,
 * intersection of {2,3,4,5,6,7} and {1,2,4,7,11,44} is
 * {2,4,7}. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <set>
using std::set;

set<int> intersect(const set<int>& S1, const set<int>& S2);

int main(){

	set<int> s1, s2, I;
	s1 = {2,3,4,5,6,7};
	s2 = {1,2,4,7,11,44};
	I = intersect(s1, s2);
	for(set<int>::iterator i = I.begin(); i != I.end();i++){
		cout << *i << "\t";
	}
	
	
	return 0;
}
set<int> intersect(const set<int>& S1, const set<int>& S2) {
	set<int> I;

	for(set<int>::iterator i = S1.begin(); i != S1.end(); i++){
		for(set<int>::iterator j = S2.begin(); j != S2.end(); j++){
			if(*i == *j){
				I.insert(*i);
			}
		}
	}
	return I;
}