#include <iostream>
using std::cout;
using std::cin;

int main ()
{
	int sum_so_far;	 /* green note */
	int input;		  /* blue note */
	int temporary_sum;  /* store green+blue here */
	sum_so_far = 0;  /* step 1 */
	/* NOTE: integers are NOT initialized to 0 by default! */
	while (cin >> input) {  /* step 2 moved to condition... */
		// cin >> input;	/* step 2 */
		temporary_sum = sum_so_far + input; /* step 3 */
		sum_so_far = temporary_sum; /* step 4 */
	}
	cout << "sum was " << sum_so_far << "\n";
	return 0;
}



