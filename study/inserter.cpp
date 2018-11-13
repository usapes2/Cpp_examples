#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> x = {
		1,2,3,4,5
			};
	vector<int> y = {
		2,4,7
			};

	vector<int> z = {
		10, 100 
	};

	set_intersection(begin(x),end(x),begin(y),end(y),inserter(z,z.end()));
/*
	for (auto i : z) {
		cout << i << endl;
	} */

	list<int> foo,bar;
	for( int i = 1; i<=5 ; i++ ) {
		foo.push_back(i);
		bar.push_back(i*100  );
	}
	list<int>::iterator it = foo.begin();
	advance (it,3);

	copy ( bar.begin(),bar.end(),inserter(foo,it));

	for (auto i : foo) {
		cout << i << endl;
	}


	return 0;
}
