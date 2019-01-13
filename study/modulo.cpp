#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, const char *argv[])
{
	double x = 1;

	double n = 100;
	double  mode = 1e9+7 ;

	for (int  i = 2; i  <= n; i++) {
		cout <<  "i: " << i << " x " << x << "\n";
		x = (x*(double)i)%mode;
	}

	
	return 0;
}
