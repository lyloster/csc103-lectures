#include <iostream>
using std::cin;
using std::cout;

int fac(int n)
{
	if (n == 0) return 1;
	return fac(n-1)*n;
}

void f(int n)
{
	if (n == 0) {
		cout << "stopping at 0\n";
		return;
	}
	cout << "called with n == " << n << "\n";
	f(n-1);
	/* TODO: predict the output of this function on n = 4.
	 * Then change the order of the cout and the recursive call
	 * and predict the output of the modified version.
	 * */
}

int fib(int n)
{
	if (n < 2) return 1;
	return fib(n-2) + fib(n-1);
}

int main()
{
	// cout << fac(4) << "\n";
	// f(4);
	cout << fib(6) << "\n";
	/* TODO: think about what really happens when calling the fib() function
	 * and then realize why it becomes very slow for values of n >= 40 or so.
	 * */
	return 0;
}

/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */
/* TODO: read lecture 5 (l5.pdf) and come to class with questions (or
 * a thorough understanding of the content!). */
