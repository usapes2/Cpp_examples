#include<algorithm>
#include<iostream>

#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	string s("Hello World");
	
	char c('h');

	cout << !( find(s.begin(),s.end(),c) == s.end() )<<endl;


	return 0;

}
