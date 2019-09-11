#include <iostream>
using std::cout;
using std::cin;

int main ()
{
	int sum_so_far;	 /* green note */
	int input;		  /* blue note */
	int temporary_sum;  /* store green+blue here */
	sum_so_far = 0;  /* step 1 */
	/* NOTE: integers are NOT initialized to 0 by default! */
	while (cin >> input) {  /* step 2 moved to condition... */
		// cin >> input;	/* step 2 */
		temporary_sum = sum_so_far + input; /* step 3 */
		sum_so_far = temporary_sum; /* step 4 */
	}
	cout << "sum was " << sum_so_far << "\n";
	return 0;
}

/* TODO: write another solution to the above problem (computing the sum
 * of all integers on stdin) using only two variables.  NOTE: there is
 * a convenient "+=" operator to help with such things.  Try it!  */
/* TODO: write a program that computes the product of all integers
 * given on stdin.  Then look back at our solutions for computing the
 * max or min, and try to formalize their similarity.  (If you want
 * inspiration / spoilers, read about "folds" in functional programming
 * on wikipedia.) */
/* TODO: given an integer n, find exponent of the largest power of two that
 * divides n.  Example: if n = r*8 with r odd, then you should output 3
 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
 * number's factorization into primes.)
 * (IDEA: keep on dividing n by two until we can't,
 * and keep track of how many times it worked.) */
/* TODO: try the exercises at the end of l1.pdf, and start reading l2.pdf,
 * as well as lectures 5-8 from Prof. Li. */
/* TODO: I left you with a makefile this time.  Instead of running g++
 * manually, just run the command "make" and it will run g++ with some
 * nice flags for you.  (NOTE: binary will be named "sum" and not "a.out"
 * in this case.)  */

// vim:foldlevel=2
