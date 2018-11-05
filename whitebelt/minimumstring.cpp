#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string minString(string s1,string s2) {
	return s1<s2?s1:s2;
}
int main(int argc, const char *argv[])
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	cout << minString(minString(s1,s2),s3);

	
	return 0;
}
