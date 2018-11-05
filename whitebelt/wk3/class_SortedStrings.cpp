#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
/*! \class SortedStrings
 *  \keeps strings in sorted order
 *
 *  Detailed description
 */
class SortedStrings
{
public:
	void AddString(const string& s) {
		// add string
		vs.push_back(s);	
		sort(begin(vs),end(vs));
	}
	vector<string> GetSortedStrings() {
		// get all strings
		return vs;
	}
private:
	vector<string> vs;


};

void PrintSortedStrings ( SortedStrings& strings) {
	for (const string& s : strings.GetSortedStrings()) {
		cout << s<<" ";
	}
	cout << endl;
}
int main(int argc, const char *argv[])
{
	SortedStrings strings;
	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings);
	strings.AddString("second");
	PrintSortedStrings(strings);

	
	return 0;
}
