#include <iostream>
using std::cout;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
	int x = 16;
	while (x > 0) {
		cout << "x == " << x << "\n";
		x /= 2;
	}
	cout << "x == " << x << "\n";
	return 0;
}
