#include <iostream>
using std::cin;
using std::cout;
double f(double x); /* "forward declaration / prototype" */
/* NOTE: the above is only necessary if you want to define
 * your function below main, or in another file... */

// void readsomething(int x) /* doesn't work: x by value */
void readsomething(int& x)
{
	cin >> x;
}

int main()
{
	/* how to call f? */
	cout << "f(2) = " << f(2) << "\n";
	/* NOTE: terminology: 2 is the "actual parameter" for
	 * the call to f; x (in the definition of f) is the
	 * "formal parameter". */
	int y = 77;
	readsomething(y); /* readsomething will give y a value? */
	readsomething(99);
	cout << "y = " << y << "\n";
	return 0;
}

/* function to compute a fixed polynomial of the input:
 * x |--> x^2 + 3 */
double f(double x)
{
	return x*x + 3;
}

/* TODO: write a function that takes two integer parameters and
 * swaps the contents, i.e., if x=2 and y=5, then after calling
 * swap(x,y), y=2 and x=5 */
/* TODO: write a function that takes 3 integers and returns
 * the maximal value */
/* TODO: write a *function* that takes an integer n and returns the
 * nth term in the Fibonacci sequence. */
/* TODO: if you are feeling ambitious, try the last exercise from l2.pdf */
