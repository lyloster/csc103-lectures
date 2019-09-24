#include <iostream>
using std::cin;
using std::cout;

/* exercise: write a function that takes a vector V of
 * integers which is *sorted*, and produces a vector
 * of the unique integers from V.
 * E.g., if V = {1,2,2,3,3,3,4}, then the result should
 * be {1,2,3,4}.  Ideally, let's make this happen *in-place*.
 * That is, we will modify V directly, and not create any
 * new vectors.  Warm up: return a new vector with the result.
 * */
vector<int> removeDuplicates(const vector<int>& V)
{
	vector<int> R; /* return value */
	int x; /* most recent new value we've seen in V. */
	if (V.size() == 0) return R;
	/* now we know V is not empty. */
	x = V[0]; /* (this could have crashed if V was empty...) */
	/* TODO: finish this... */
	return R;
}

/* TODO: rewrite the removeDuplicates function so it has the following
 * prototype, and does *NOT* allocate another vector, but instead
 * modifies the vector V *in-place*.  */
// void removeDuplicates(vector<int>& V);

int main()
{
	/* TODO: test out the functions you wrote above. */
	return 0;
}

/* TODO: write a function that takes a vector and searches for
 * a particular value x, returning true if and only if x is found. */
/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
/* TODO: write a function that takes a vector and places the elements
 * in sorted order.  Warning: this could be kind of challenging.  There is
 * a solution in l3.pdf, but you should try to come up with something on
 * your own first if possible. */
