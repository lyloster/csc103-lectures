/* program to test the collatz conjecture. */
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int n; /* number we are testing. */
	while (cin >> n) {
		int original = n; /* save a copy of n for output at the end */
		int count = 0; /* record # of steps until termination. */
		while (n != 1) {
			if (n%2 == 0)
				n/=2;
			else
				n = 3*n + 1;
			count++;
		}
		cout << count << " steps for " << original << "\n";
	}
	return 0;
}

/* TODO: delete the above and write it from scratch */
/* TODO: keep track of the maximal intermediate value and print that out
 * along with the result. */
/* TODO: try out (and try to understand) these shell commands:
 * $ echo {1..1000} | ./collatz | less
 * $ echo {1..1000} | ./collatz | sort -nr | less
 * $ echo {1..1000} | ./collatz | sort -nr | head -5
 * */

// vim:foldlevel=2
