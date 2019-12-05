#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set>
using std::set;

set<set<int> > powerset(set<int>& S)
{
	/* base case: S is empty */
	if (S.size() == 0) {
		set<set<int> > P;
		P.insert(S); /* S == {}, so now P == {{}} */
		return P;
	}

	int x = *(S.begin());
	S.erase(S.begin());

	set<set<int> > powerSet = powerset(S);
	set<set<int> > xPowerSet, completePowerSet;
	xPowerSet.insert(powerSet.begin(), powerSet.end());
	//insert an element in each set in the set of sets
	for (set<set<int> >::iterator i = xPowerSet.begin(); i != xPowerSet.end(); i++){
			set<int> temp;
			temp.insert((*i).begin(),(*i).end());
			temp.insert(x);
			//xPowerSet.insert(temp.begin(),temp.end());
			completePowerSet.insert(temp);
	}

	completePowerSet.insert(powerSet.begin(), powerSet.end());
	
	return completePowerSet;
}

/* TODO: once you're done writing and testing it, trace the sequence
 * of function calls when run on a set of 3 elements. */

int main(void){
	set<int> S = {1,2,3};
	set<set<int> > powerSet;
	powerSet = powerset(S);
	//print out a set of sets
	for(set<set<int> >::iterator i = powerSet.begin(); i != powerSet.end(); i++){
		cout << "{ ";
		for(set<int>::iterator j = (*i).begin(); j != (*i).end(); j++){
			
			 cout << *j << ", ";
		}
		cout << "}" <<endl;
	}
	return 0;
}

/* TODO: try to write another version of the power set function
 * that divides the set into two disjoint subsets of equal(ish)
 * size, computes the powersets of those recursively, and then
 * puts them back together.  It is essentially the same idea as
 * the above.  Bonus question: prove your algorithm works, and
 * that it requires approximately the same number of steps as
 * the original. */
