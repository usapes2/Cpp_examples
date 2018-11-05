#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int indxF(string s) {
	int pos=-1;
	bool trig = false;
	int count = 0;

	for (auto i : s) {
		if( i == 'f'){
			if(trig == false) {trig = true;}else{
		 
				pos = count;
				break;}
		}
		count +=1;
	}
	return pos;
}
int main(int argc, const char *argv[])
{
	string s;
	cin >>s;

	cout << indxF(s) <<endl;	
	return 0;
}
