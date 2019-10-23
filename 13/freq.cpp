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

void printStars (int n);
void printHistogram(const map<string,int>& freq);

int main(void){
	map<string,int> freq;
	string s;
	cout << "Please enter some strings:" << endl;
	//until end of stdin is reached
	while(!cin.eof()){
		cin >> s;
		freq[s]++;
	}
	//in arch linux works
	//in windows command prompt program is getting stuck here
	for(map<string,int>::iterator i = freq.begin(); i != freq.end(); i++){
		cout << (*i).first << '\t' << (*i).second << endl;
	}

	printHistogram(freq);
	return 0;
}

void printHistogram(const map<string,int>& freq){
		for(map<string,int>::iterator i = freq.begin(); i != freq.end(); i++){
		cout << (*i).first << '\t' << printStars((*i).second) << endl;
	}

}

void printStars (int n){
		cout << '*'*n;
}