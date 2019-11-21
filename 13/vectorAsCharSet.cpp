/* try to implement your own version of set<char> using a vector
 * or array as discussed in class. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <set>
using std::set;
#include <vector>
using std::vector;

vector<bool> createAlphabet ();
void addLetter (vector<bool>& v, char a);
void removeLetter (vector<bool>& v, char a);
bool searchInSet (const vector<bool>& v, char a);
void printAlphabet (const vector<bool>& v);

int main(){
	bool state;
	vector<bool> alphabet = createAlphabet();
	addLetter(alphabet, 'a');
	addLetter(alphabet, 'M');
	//state = searchInSet(alphabet, 'M');
	state = searchInSet(alphabet, 'a');
	cout << state << endl;
	printAlphabet(alphabet);
	removeLetter(alphabet,'M');
	state = searchInSet(alphabet, 'M');
	cout << state << endl;
	printAlphabet(alphabet);
	return 0;
}


vector<bool> createAlphabet (){
	vector<bool> alphabet;
	for(int i = 'A'; i < 'z'; i++){
		alphabet.push_back(false);
	}
	return alphabet;
}

void addLetter (vector<bool>& v, char a){
	v[a] = true;
	return;
}


void removeLetter (vector<bool>& v, char a){
	v[a] = false;
	return;
}


bool searchInSet (const vector<bool>& v, char a){
	if(v[a]){
		return true;
	}else{
		return false;
	}
}

void printAlphabet (const vector<bool>& v){
	cout << v['a'] << endl;
	//doesn't print alphabet correctly
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
	cout << endl;
	return;
}

