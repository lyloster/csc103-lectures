/* Write the following function which converts all lower
 * case letters to upper case. Note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).
 * */

void YELL(string& s);

int main()
{
	string r;
	cout << "enter a string: " << endl;
	cin >> r;
	YELL(r);
	cout << r << endl;
	return 0;
}

void YELL(string& s) {
	/* make all lower case chars upper case. */
	for(int i = 0; i < s.length(); i++){
		s[i] = s[i] + ('A'-'a');
	}
}