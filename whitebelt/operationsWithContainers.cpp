#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int main(int argc, const char *argv[])
{
	vector<string> nums = {"1","2","3","4","5++"};

	for (auto i : nums) {
		//cout << i<<",";
	}

	vector<int> numss = {9,2,3,4,5,6,7,5};

	int quantity = 0;
	for (auto i : numss) {
		if (i==5) {
			quantity +=1;
		}
		
	}
	cout << quantity <<endl;

	// Same we can do using STL
	
	//int c = count(begin(numss),end(numss),1);

	//cout << c << endl;

	cout << " After sorting" <<endl;
	sort(begin(numss),end(numss));
	for (auto i : numss) {
		cout << i<<endl;
		
	}

	int a = 6;
	int b = 4;
	int c = 1;
	cout << a/b + c / 0.4 ;

	
	return 0;
}
