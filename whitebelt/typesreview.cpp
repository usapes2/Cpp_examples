
#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct Person{
	string name;
	string surname;
	int age;
};

int main(int argc, const char *argv[])
{
	vector<Person> staff;
	Person s1;
	s1 = {"Vova","Sapeshka",25};
	staff.push_back(s1);
	cout << staff[0].name<<endl;
	

	std::map<string, int> name_to_val;

	name_to_val["one"] = 1;
	name_to_val["two"] = 2;
	name_to_val["three"] = 3;

	for (auto i : name_to_val) {
		cout<<i.first <<endl;
	}
	return 0;
}
