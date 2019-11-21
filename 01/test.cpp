#include <iostream> /* gives you a way to read/write input/output */
using std::cin;
using std::cout;
#include <climits>

int main() {
	/* this is where your program's instructions begin.
	 * (we'll put some version of steps 1-4 here...) */
	/* analog of post-it notes: *variables* */
	int blue;  /* allocates space to store an integer. */
	int green; /* allocates space to store an integer. */
	/* how to write something to the post it note? */
	// blue = 99; /* write 99 onto the blue note */
	/* what about "listening" for a number? */
	// cin >> blue;
	green = INT_MIN; /* INT_MIN sort of like -infinity... */
	/* let's work on steps 1-3: */
	while (cin >> blue) { /* listen until no more numbers spoken */
		 //cin >>  blue; /* step 1. */
		if (blue > green) { /* steps 2+3 */
			green = blue;
		}
	}
	cout << "The largest number was " << green << "\n";
}


/* TODO: replace "cin >> blue" with "cin << blue", try to compile again,
 * and take note of the somewhat lengthy error message that results. */

// vim:foldlevel=3



