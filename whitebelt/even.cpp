#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void even(int a, int b) {

	for( int i = a ; i <= b ; i++ ){
		if (i%2 == 0) {
			cout<<i<<" ";
			
		}
	}
	
}

int main(int argc, const char *argv[])
{
	
	int a,b;
	cin>>a>>b;
	even(a,b);
	
	return 0;
}
