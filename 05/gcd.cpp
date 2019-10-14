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
	int min =  m ;
	if (m > n) {
		min = n;
	}
	int d = min; /* d is our candidate for gcd(n,m) */
 	while (!(n%d == 0 && m%d == 0)) {
		d--;
	}
 	/* NOTE: plain english translation: while d is not a common
	 * divisor of n and m, decrement d. */
	printf("gcd(%i,%i) = %i\n",n,m,d);
	return 0;
}


/* TODO: a slight generalization of an earlier exercise: for integers
 * n and k, determine the largest power of k that divides n.


