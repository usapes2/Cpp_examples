#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

int main(int argc, const char *argv[])
{
	ostringstream s;

	int x,y;
	int r;
	cin >> x >> y ;
	if(x < y ) swap(x,y);
	s << "gcd(" << x << ","<<y<<")=";

	do
	{ 
		r = x % y;
		x = y;
		y = r;

	} while ( r!=0);

	cout << x << endl;
	//cout << s.str() << endl;

	
	return 0;
}
