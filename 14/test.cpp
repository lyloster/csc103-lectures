#include <iostream>
using std::cin;
using std::cout;
#include <cstdio>

/* TODO: read the first two sections of l4.pdf, and do the exercises therein.
 * Also look at ../whatstheoutput/7.cpp
 * Then come back and try to make sense of the following.
 * */

int main()
{
	/* dynamically allocate an int: */
	int* p = new int; /* this integer will NOT be on the runtime stack. */
	/* what is the 'new'??  The new operator does the following:
	 * 1. requests a block of memory (goes through libc; might involve a syscall).
	 * 2. marks the memory as being in use by your program.
	 * 3. gives you a pointer to the newly allocated block of memory.
	 * */
	/* store 17 in it: */
	*p = 17;
	/* give it a more convenient name if you want: */
	int& x = *p; /* this is called *aliasing* */
	printf("x == %i\n",x);
	int A[10];
	// int A[x];
	/* TODO: uncomment the above line (note the non-constant array size)
	 * and see which compiler errors you get.  NOTE: if you don't compile
	 * with the makefile, it will silently do some dynamic memory alloacation
	 * behind the scenes. */
	cout << A << "\n";
	/* once you're done with dynamically allocated memory, give it back to the
	 * system using delete: */
	delete p;
	/* NOTE: when your program ends, all memory resources are freed, but it is
	 * good practice to delete whatever you allocate. */
	return 0;
	/* TODO: understand why you can't resize a static array like A above. */
}
