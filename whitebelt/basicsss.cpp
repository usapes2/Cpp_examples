#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void printvect( vector<int> v,string title=""){
	cout << title<<":";
	for (auto i : v) {
		cout << i <<",";
	}
	cout << endl;

}

int main(int argc, const char *argv[])
{
	vector<int> v = {
		0,4,1,2,3
	};

	printvect(v,"before");
	sort(begin(v),end(v));
	printvect(v,"after");
	
	return 0;
}
