/* program to test the collatz conjecture. */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n;
	cout << "Please enter a number: " << endl;
	cin >> n;

	int origin = n;
	int count = 0;
	int max = n;
	while(n != 1){
		if(n%2 == 0){
			n /= 2;
		}else{
			n = n*3 +1;
			if(max < n){
				max = n;
			}
		}
		count ++;
	}

	cout << count << " steps for " << origin << endl;
	cout << "The max intermediate value of n is " << max << endl;

	return 0;
}


/* TODO: try out (and try to understand) these shell commands:
 * $ echo {1..1000} | ./collatz | less
 * $ echo {1..1000} | ./collatz | sort -nr | less
 * $ echo {1..1000} | ./collatz | sort -nr | head -5
 * */

