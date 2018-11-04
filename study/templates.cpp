#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

template <typename T>
void MySwap (T& a, T& b){
	T z = a; a = b; b = z;
}

template <typename T>
T MySum(T& a, T& b){
	return a+b;
}
int main(int argc, const char *argv[])
{
	int a = 1;
	int b = 2;
	
	cout << MySum(a,b);

	return 0;
}
