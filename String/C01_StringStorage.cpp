/* What's in a String */
#include<string>
#include<iostream>
using namespace std;

int main() {
	string s1("12345");
	// set the iterator indicate the 1st elem
	string::iterator it = s1.begin();
	// this may copy the first to the second or
	// use reference counting to simulate a copy
	string s2 = s1;
	// either way, this statement may ONLY modify first
	*it = '0';
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;

	return 0;
}

