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

