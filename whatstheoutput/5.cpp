#include <iostream>
using std::cout;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int fn1(int& a, int b, int& c)
{
    a = b++;
    b += 10;
    c = ++a;
    return b;
}

int main()
{
    int x=3, y=5, z=13;
    cout << x << " " << y << " " << z << "\n";
    int r = fn1(x,y,z);
    cout << x << " " << y << " " << z << "\n";
	cout << r << "\n";
    return 0;
}
