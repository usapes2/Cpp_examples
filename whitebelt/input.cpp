#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void PrintVector(const vector<bool>& v) {
	int i = 0;
	for (auto s : v) {
		cout << i<<":"<<s <<endl;
		++i;
	}
}

int main(int argc, const char *argv[])
{
	int n;
	//cin >> n;

	/*vector<string> v(n);

	for (string& s : v) {
		cin>>s;
		
	} */

	//PrintVector(v);
	vector<bool> is_holiday(28,false);
	is_holiday[22] = true; // 23 Is holiday in Russia
	PrintVector(is_holiday);	
	is_holiday.assign(31,false);
	PrintVector(is_holiday);	
	is_holiday.assign(1,true);
	cout << "clear"<<endl;
	PrintVector(is_holiday);	
	
	return 0;
}
