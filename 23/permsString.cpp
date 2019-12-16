#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

/*recursively generate all permutations of a string:
		Notice the first element stays put, and the last two swap.
		Our approach will be to give every element a “turn” going first, and use the magic box
		to run through all possible arrangements of the remaining n − 1 elements.
		Start with an empty list of strings P to store the output. Then for i in the range 0, . . . , n − 1 perform these steps:
			1. Swap s[0] ↔ s[i].
			2. Compute all permutations of the suffix s[1, . . . , n − 1].
			3. Add to output P each string produced in step 2 but with s[0] prepended.
*/

vector<string> perms (string s); 
void swap(char& a, char& b);

int main(){
	string s = "abc";
	vector<string> perm = perms(s);

	for(int i = 0; i < perm.size(); i++){
		cout << perm[i] << "	";
	}
	return 0;
}

vector<string> perms (string s){
	vector<string> p;
	if(s.length() < 2){
		p.push_back(s);
		return p;
	}

	for(int i = 0; i < s.length(); i++){
		swap(s[0], s[i]);

		vector<string> temp = perms(s.substr(1));

		for(int j = 0; j < temp.size(); j++){
			p.push_back(s[0] + temp[j]);
		}
	}
	return p;
}

void swap(char& a, char& b){
	char temp = a;
	a = b;
	b = temp;
	return;
}