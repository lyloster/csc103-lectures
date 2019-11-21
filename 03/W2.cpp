#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Implicit/explicit typecasting, pointers, conditional operator

 int main(){
	int x = 5;
	double d = x/2.0;
	int y = x/2;
	/*compact notation for if-else 
	  if (d==y){
	  	cout << "success";
	  }else {
 		 cout << "Ouch";
	  }
	*/

	cout << ( d==y ? "success" : "Ouch") << "\n";


	/*explicit casting (from C, many ways to cast in C++)
	double dbl = 15.2;
	 (int)dbl;
	*/

	//pi is a pointer to the x integer, holds the memory location of x, &x the address of x
	int * pi = &x;

	//cout << "The memory location of x is: " << //pi or  &pi;
	
	/* illegal implcit conversion between int * and long, cam be done with an explicit conversion
	long li = pi;
	*/

	long li = (long) pi; //would not work if int li, the memory location is too long to be stored in an int

	cout << (li == (long)pi ? "same" : "not the same") << '\n';
	cout << "pi is equal to: " << pi << "\n";
	cout << "li is equal to: " << li << endl;

	bool b1 = false;
	bool b2 = true;
	bool c = (d == y);

	/* TODO: Check again
	 * NOT SURE
	 * do{
		if(condition)
			continue;
	} while(false){
	}*/

	return 0;
}



