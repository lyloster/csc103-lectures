#include <iostream>
using std::cout;
using std::cin;

/* TODO from ../04/sum.cpp */
size_t numtwos(int n)
{
	size_t count = 0;
	while (n%2 == 0) { /* still have 2's to remove... */
		count++;
		n /= 2; /* n = n/2; */
	}
	return count;
}

/* TODO from ../06/rectangles.cpp */
void printRectangle(size_t n, size_t m)
{
	for (size_t i = 0; i < n; i++) {
		/* print a row of m characters */
		for (size_t j = 0; j < m; j++) {
			if (j == 0 || j == m-1 || i == 0 || i == n-1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << "\n"; /* finish row with a newline */
	}
}

/* TODO from ../08/vectors.cpp */
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
	R.push_back(x); /* add x to R */
	for (size_t i = 1; i < V.size(); i++) {
		/* if V[i] == x, then V[i] is NOT new and should be skipped.
		 * otherwise, add V[i] and update x. */
		if (V[i] != x) {
			R.push_back(V[i]);
			x = V[i];
		}
	}
	return R;
}

/* TODO: rewrite the removeDuplicates function so it has the following
 * prototype, and does *NOT* allocate another vector, but instead
 * modifies the vector V *in-place*.  */
void removeDuplicates(vector<int>& V)
{
	/* see sketch of solution in the notes... */
}

int main()
{
	cout << numtwos(24) << "\n";
	printRectangle(4,7);
	return 0;
}
