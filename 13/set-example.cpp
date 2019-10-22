#include <iostream>
using std::cout;
using std::cin;
#include <set>
using std::set;

int main()
{
	/* you declare them similarly to vector: you have to
	 * supply a datatype. */
	set<int> S;
	/* let's fill S with squares of integers: */
	for (size_t i = 1; i <= 100; i++) {
		S.insert(i*i);
	}
	/* now run some searches: */
	int n;
	while (cin >> n) {
		/* NOTE: this also works, and is a little simpler:
		 * if (S.count(n)) {...} */
		if (S.find(n) != S.end()) {
			cout << n << " is a square <= 100\n";
		}
	}
	/* how to just print everything in a set? */
	/* first look at this strange way to print an array: */
	int A[10] = {0,1,2,3,4,5,6,7,8,9};
	cout << "printing A:\n";
	for (int* i = &A[0]; i != &A[10]; i++) {
		cout << *i << "\n";
	}
	/* the above approach illustrates the concept of "iterators".
	 * Think of iterators as pointers to elements of a container
	 * like an array, vector, or set.  They support the * operator
	 * (dereference) as well as the ++ operator which moves the
	 * pointer to the next element of the container.
	 * */
	/* to go through a set, we do much the same thing, where
	 * S.begin() is like &A[0], and S.end() is like &A[10], which
	 * is *not* a valid element (array was only of size 10), but
	 * instead is just past the end.  Anyway, here is how to go
	 * through all elements of a set.  Note that they will always
	 * be printed in sorted order: */
	cout << "printing contents of S:\n";
	for (set<int>::iterator i = S.begin(); i != S.end(); i++) {
		cout << *i << "\n";
	}
	return 0;
}

/* TODO: you can use sets to sort a vector or an array.  Try it maybe. */

/* TODO: compute the intersection of two sets.
 * Recall that the intersection of two sets is the set
 * consisting of the elements they have in common.  E.g.,
 * intersection of {2,3,4,5,6,7} and {1,2,4,7,11,44} is
 * {2,4,7}.  Here's a start: */
set<int> intersect(const set<int>& S1, const set<int>& S2) {
	set<int> I;
	/* code goes here... */
	return I;
}
/* TODO: write a function that returns the union of two sets */

/* TODO: try to implement your own version of set<char> using a vector
 * or array as discussed in class. */
/* TODO: answer the following question: if A,B are finite sets of
 * sizes n,m respectively, how many different (mathematical) functions
 * f:A-->B are there?  Concretely, how many functions are there that
 * take a single char and return a boolean?  (Again, mathematical functions,
 * as distinct from any particular programmatic implementation).
 * */

/* Some test code for your intersect function: */
void intTest() {
	set<int> s1 = {2,3,4,5,6,7};
	set<int> s2 = {1,2,4,7,11,44};
	set<int> s3 = intersect(s1,s2);
	cout << "intersection contained: ";
	for (set<int>::iterator i = s3.begin(); i != s3.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n";
}

/* NOTE: you'll have to prototype these above main() if you want to
 * call them from main(). */
