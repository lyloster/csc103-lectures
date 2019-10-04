#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
    int A[5] = {0,2,4,6,8};
    cout << A[1] << endl;
    cout << ++A[2] << endl;
    cout << *A << endl;
    int* p = &A[3];
    cout << *(p--) << endl;
    cout << *p << endl;
    return 0;
}
