#include <iostream>
using std::cout;

/* TODO: try to understand this and read a litle about ascii
 * on wikipedia or similar. */
int main() {
	/* print out part of an ascii table: */
	for (int i = 32; i < 128; i++) {
		// cout << i << " ";
		cout << (char)i << " ";
		/* NOTE: above "(char)i" is an example of *typecasting*.
		 * There are numerous ways to do this in C++, but the simplest
		 * (shown above) is inherited from the C language (it's called
		 * a "c-style" cast).  Another use-case: say you want to divide
		 * two integers i1 and i2, but not lose the fractional part.
		 * You can simply do the following, as it suffices to convert
		 * just one of the values to a floating point type:
		 * i1/(double)i2; */
	}
	cout << "\n";
	return 0;
}
