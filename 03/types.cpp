/* a first look a datatypes. */
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int x = -99;
	unsigned int y = x;
	cout << "x == " << x << "\n"
		 << "y == " << y << "\n";
	/* NOTE: the pattern of bits in memory for x is the
	 * same as the pattern for y, but the *interpretation*
	 * is different. */
	char c = 'A';
	int z = c;
	cout << "c == " << c << "\n"
		 << "z == " << z << "\n";
	long w = z;
	/* NOTE: different types use different amounts of space: */
	cout << "number of bytes for char: " << sizeof(c) << "\n";
	cout << "number of bytes for int:  " << sizeof(z) << "\n";
	cout << "number of bytes for long: " << sizeof(w) << "\n";

	/* other numeric types: float and double: */
	double d = 9.9;
	/* let's take a moment to explore how arithmetic works. */
	cout << "9/4   == " << 9/4 << "\n";
	cout << "9/4.0 == " << 9/4.0 << "\n";
	/* NOTE: performing arithmetic on integers with other integers will always
	 * result in an integral type.  However, when mixing integer and floating
	 * point, the result is "promoted" to a floating point type. */
	/* NOTE: it might seem like integer divisions somehow "lose precision",
	 * but note that you can also recover the *remainder* of a division by
	 * using the '%' operator.  TODO: try it out. */
	/* NOTE: be aware that using floating point can lead to
	 * rounding errors, which may be non-trivial!  In particular,
	 * you can find examples where basic algebraic identities
	 * do not hold!  E.g., if a+c = b+c, then... a == b.  Yet
	 * even this simple identity could fail with floating point.
	 * See the exercise below. */
	float a,b,c;
	a = 0;
	b = 0;
	c = 0;
	if (a+c == b+c) {
		cout << "a+c == b+c\n";
		if (a != b) {
			cout << "...yet a != b\n";
			/* TODO: find values for a,b,c so that the
			 * above line is printed when you run this. */
		}
	}

	/* One other super important type: boolean. */
	bool b = true; /* can hold only "true" or "false" values. */
	/* booleans are used in conditional expressions like if-statements
	 * and loops.  More on this next time. */
	return 0;
}

/* TODO:
 * 1. Do the reading: in particular Prof. Li's notes through lecture 4,
 *    and be sure you thoroughly understand my l1.pdf.
 * 2. Again, make sure you can compile this on the command line.  Follow
 *    the tutorial if you haven't already.
 * 3. Experiment with the above.  make a change that doesn't compile
 *    and try to make sense out of the resulting error messages.
 * 4  Make sure you have streamlined the process of editing,
 *    compiling, and testing your program.
 * 5. If you have time, read the tutorial about git.  Some useful commands
 *    to know: 'git diff' and 'git log -p'.
 * */

/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).
 * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */
