#include <map>
using std::map;
#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main(void)
{
	map<string,int> F; /* F[s] === #times s was seen. */
	/* NOTE: you can kind of think of a map as a vector, but
	 * where the indexes do NOT need to be integers. */
	/* Terminology: in this case the strings are "keys" and the
	 * integers are the associated "values". */
	string s;
	while (cin >> s) {
		F[s]++; /* NOTE: by referencing F[s], a new integer
		           is created if necessary, and initialized
				   to 0. */
		/* NOTE: the expression F[s] gives you the value
		 * that has been associated to the key s. */
	}
	for (map<string,int>::iterator i=F.begin(); i!=F.end(); i++) {
		cout << (*i).first << ":\t" << (*i).second << "\n";
		/*        key                      value         */
	}
	return 0;
}
