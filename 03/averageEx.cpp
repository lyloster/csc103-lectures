#include <iostream>
using std::cin;
using std::cout;

void average();

/* The program reads numbers from console and averages them out*/

 int main () {
	average();
	return 0;
}


void average(){
	double average, a;
	double count = 1.0;
	
	cout << "Please enter numbers to be averaged out: \n";
 	cin >> average;

	while  (cin >> a){
		cin >> a;
		average +=a;
	 	count++;
	}
	average /= count;
	cout << "The average of all the numbers entered is " << average << ".\n";
}
