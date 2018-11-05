#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void Printset (const set<string>& s , string title ="") {
	cout << title<<":";
	
	for (auto i : s) {
		cout << i <<",";
	}
	cout<<endl;

}

void Printset (const set<int>& s, string title = "") {
	cout << title<<":";
	for (auto i : s) {
		cout << i <<",";
	}
	cout<<endl;

}

int main(int argc, const char *argv[])
{
	vector<int> v {
		5,6,7,10,2,0,12,13
	};
	
	set<int> iset;
	set<string> sset;

	for (int i = 0; i < 10; i++) {
		iset.insert(i);
	}
	for (int i = 0; i < 10; i++) {
		iset.insert(i);
	}
	Printset(iset,"integer set");
	for (int i = 0; i < 10; i++) {
		sset.insert(to_string(i));
	}
	Printset(sset,"string set ");

	vector<int> vect(iset.begin(),iset.end());

	cout << "My vector" <<endl;

	for (int i = 0; i < 5; i++) {
		vect.push_back(i);
	}
	for (auto i : vect) {
		cout << sset.count(to_string(i)) <<endl;
	}

	// counting using algorithms
	cout<<"counting elements in the vector" <<endl;
	cout << count(begin(vect),end(vect),2)<<endl;
	cout<<"counting elements in the integer set" <<endl;
	cout << count(begin(iset),end(iset),2)<<endl;

//	cout << count(begin(m),end(m),{2,2})<<endl;
	vector<int> v2 = {
		0,1,2,3,4
	};

	int thr = 0;
	//cin>> thr;
	cout << count_if(begin(v2),end(v2),[] (int x) {
			if (x>0) {
				return true;
			}
			return false;
			}); 

	return 0;
}
