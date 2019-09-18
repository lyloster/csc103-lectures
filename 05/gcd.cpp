#include <iostream>
using std::cin;
using std::cout;
#include <cstdio> /* for printf. */

int main()
{
	/* example: a "brute force" approach to computing the greatest
	 * common divisor of two integers.  We will run through the entire
	 * space of possible solutions, and check each possible candidate
	 * for being a valid solution.  The range of possible values for
	 * gcd(n,m) would be {1,...,min(n,m)}.  We'll start with the largest
	 * possibility and work our way down.  Details follow.
	 * NOTE: this is an awfully inefficient way to compute gcds.  We'll
	 * see more efficient methods later on.
	 * */
	int n,m;
	cin >> n >> m;
	int min;
	if (m < n) {
		min = m;
	}
	else {
		min = n;
	}
	/* TODO: shorten the above by unconditionally assigning to min
	 * one of the inputs, then checking if you made the right
	 * choice.  (This will eliminate the "else" part.) */
	int d = min; /* d is our candidate for gcd(n,m) */
	while (!(n%d == 0 && m%d == 0)) {
		d--;
	}
	/* NOTE: plain english translation: while d is not a common
	 * divisor of n and m, decrement d. */
	printf("gcd(%i,%i) = %i\n",n,m,d);
	return 0;
}

/* TODO: write a loop that prints the sum of the first n odd cubes. */
/* TODO: write a brute force test for perfect cubes.  Check if
 * n = k^3 for some integer k.  */
/* TODO: sum the squares of all integers from 1..100.
 * I.e., compute 1+4+9+...+10000 */
/* TODO: a slight generalization of an earlier exercise: for integers
 * n and k, determine the largest power of k that divides n.
 * NOTE: see if you can formalize the invariant you used to solve this.
 * (See l2.pdf regarding invariants.)
 * */
/* TODO: write a program that reads (arbitrarily many) integers from
 * stdin and outputs the *second* smallest one.  NOTE: you don't need
 * to store many numbers (all at once, that is) to do this!  You'll
 * only need a few integer variables.  Think about invariants! */

// vim:foldlevel=1
