#include <iostream>
using std::cout;
using std::cin;
#include <cstdio>

/* NOTE: x,y used for OUTPUT. */
int xgcd(int a, int b, int& x, int& y)
{
	/* base case: b == 0 */
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	/* now we assume that xgcd works for smaller inputs,
	 * where "smaller" means the second parameter is
	 * smaller in absolute value. */
	int xx,yy; /* x',y' from the notes */
	int q = a/b, r = a%b;
	int d = xgcd(b,r,xx,yy);
	/* at this point, xx*b + yy*r = d = gcd(a,b) */
	/* all that remains is to set x and y so that xa+yb = d */
	x = yy;
	y = xx - yy*q;
	return d;
}

/* TODO: delete the xgcd function above and try to write it from scratch */
/* TODO: if you haven't already, try out the exercises from l5.pdf */

int main(void)
{
	int a,b,x,y,d;
	while (cin >> a >> b) {
		d = xgcd(a,b,x,y);
		/* now x,y set such that xa+yb = d */
		printf("%i = %i*%i + %i*%i\n",d,x,a,y,b);
	}
	return 0;
}
