#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, const char *argv[])
{
	set<string> S;
	set<string>::iterator j;
	string t;

	while (cin >> t)
		S.insert(t);
	for (j = S.begin(); j != S.end(); j++) 
		cout << *j << "\n";
		


	return 0;
}
