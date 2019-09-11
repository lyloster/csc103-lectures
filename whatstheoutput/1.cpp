#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
    int x = 10, y = 3;
    double d = 4, e = 2;
    cout << --x << endl;
    cout << x-- << endl;
    cout << y/x << endl;
    y = e;
    cout << y/x << endl;
    cout << x%y << endl;
    cout << (x-d)/y << endl;
    return 0;
}
