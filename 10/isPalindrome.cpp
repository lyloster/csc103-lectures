/* Write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;


bool isPalindrome(const string& s);

int main()
{
	string s;
	cout << "enter a string: " << endl;
	cin >> s;
	
	if (isPalindrome(s)) {
		cout <<  s << " is a palindrome.\n";
	} else {
		cout << s << " is not a palindrome." << endl;
	}

	return 0;
}


bool isPalindrome(const string& s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] != s[s.length()-1-i]){
			return false;
		}
	}
	return true;
}