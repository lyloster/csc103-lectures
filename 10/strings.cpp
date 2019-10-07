#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

size_t substring(const string& s, const string& t)
{
	size_t maxoffset = s.length() - t.length();
	for (size_t i = 0; i <= maxoffset; i++) {
		/* check for match at offset i in s.
		 * i.e., does t[0]==s[i], t[1]==s[i+1], etc... */
		bool match = true;
		for (size_t j = 0; j < t.length(); j++) {
			if (t[j] != s[i+j]) {
				/* no match at offset i, so check the next offset. */
				match = false;
				break;
			}
		}
		/* how to check if we found a match? */
		if (match) return i;
	}
	/* if we ever make it here, we know we never found a match... */
	return -1;
	/* TODO: delete this whole thing and write it from scratch. */
	/* TODO: try to re-write the above without the extra variable
	 * "match" (hint: you just have to detect *why* you left the
	 * inner for loop). */
}

/* TODO: write the following function which converts all lower
 * case letters to upper case.  NOTE: there are library functions
 * that will convert a single character (see 'man 3 toupper'),
 * but it might be more instructive to do it without using those.
 * If doing it without the help of toupper, note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).
 * */
void YELL(string& s) {
	/* make all lower case chars upper case. */
}

/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

int main()
{
	string s,t;
	cout << "enter larger string: ";
	cin >> s;
	cout << "enter target string: ";
	cin >> t;
	size_t i = substring(s,t);
	if (i == size_t(-1)) {
		cout << "target " << t << " not found.\n";
	} else {
		cout << "target " << t << " found at index " << i << ".\n";
	}
	/* TODO: write test code for the other exercises here. */
	return 0;
}
