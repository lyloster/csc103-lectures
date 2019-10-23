#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int substring(const string& s, const string& t)
{
	int maxOffset = s.length() - t.length();
	for(int i = 0; i <= maxOffset; i++){
		/* check for match at offset i in s.
		 * i.e., does t[0]==s[i], t[1]==s[i+1], etc... */
		bool match = true;
		for(int j = 0; j < t.length(); j++){
			if(s[i + j] != t[j]){
				match = false;
				break;
			}

		}
		if (match) return i;
	}
	return -1;


	/* TODO: try to re-write the above without the extra variable
	 * "match" (hint: you just have to detect *why* you left the
	 * inner for loop). */
}

int main()
{
	string s,t;
	cout << "enter larger string: " << endl;
	cin >> s;
	cout << "enter target string: "<< endl;
	cin >> t;
	size_t i = substring(s,t);
	if (i == size_t(-1)) {
		cout << "target " << t << " not found.\n";
	} else {
		cout << "target " << t << " found at index " << i << ".\n";
	}

	return 0;
}
