/* TODO: re-write the frequency table example from scratch and make sure you
 * understand why it works. */

#include <map>
using std::map;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main(void){
	map<string,int> freq;
	string s;
	cout << "Please enter some strings:" << endl;
	while(!cin.eof()){
		cin >> s;
		freq[s]++;
	}
	cout << "everything in map" << endl;
	for(map<string,int>::iterator i = freq.begin(); i != freq.end(); i++){
		cout <<"in for" << endl;
		cout << (*i).first << '\t' << (*i).second << endl;
		cout << "after print" << endl;
	}
	return 0;
}