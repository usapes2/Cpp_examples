// Simple replace of all chars in a string
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main() {
	string s("aaaXaaaaaaXXaaaaaaXXXXaaaa");
	cout << s << endl;
	replace(s.begin(),s.end(),'X','Y');
	cout <<s<<endl;

	vector<int> v;
	for(vector<int>::size_type i = 0 ; i < 10 ; i++ ) 
		v.push_back(i);
	for(vector<int>::size_type i = 0 ; i < 10 ; i++ ) 
		cout << v[i] <<endl;

	replace(v.begin(),v.end(), 0,6);// replaces all instances

	for(vector<int>::size_type i = 0 ; i < 10 ; i++ ) 
		cout << v[i] <<endl;


	return 0;
}
