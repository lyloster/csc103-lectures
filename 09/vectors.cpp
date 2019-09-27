#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void reverse(vector<int>& V)
{
	for (size_t i = 0; i < V.size()/2; i++) {
		/* swap V[i] <--> V[V.size()-1-i] */
		int t = V[i]; /* save a copy of V[i] */
		V[i] = V[V.size()-1-i];
		V[V.size()-1-i] = t;
	}
}
/* TODO: delete the above and write it from scratch. */

int main()
{
	/* read a vector of integers from stdin */
	vector<int> V; /* NOTE: V will initially be empty */
	int x;
	while (cin >> x) {
		V.push_back(x);
	}
	/* NOTE: if you want to make a copy of V, do this: */
	// vector<int> T(V); /* T will be initialized to a copy of V. */
	reverse(V);
	/* print V's contents back out: */
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
}

/* TODO: write a function called "push_front(V,x)" for a vector, which
 * adds parameter x to index 0 of vector V by moving all the other values
 * to higher indexes.  (This should show you why inserting elements is only
 * efficient at the *end* of a vector.) */
/* TODO: if you haven't done it already, try to write "binary search" for
 * a sorted vector. */
/* TODO: write a function that takes a vector V (of integers) and a single
 * integer x, and returns a boolean value indicating whether or not x can
 * be expressed as the sum of two elements of V.  (Let's say you can't use
 * the same index twice, so you must find i =/= j such that x = V[i]+V[j].) */
