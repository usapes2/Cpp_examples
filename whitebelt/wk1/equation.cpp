#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main(int argc, const char *argv[])
{
	
	double A = 0 , B = 0, C = 0;
	cin >> A >> B >> C;

	if ( A != 0) {
	double D = B*B - 4*A*C;
	if(D < 0) cout<< ""<<endl;
	if(D == 0) cout << -B/(2*A) <<endl;
	if(D > 0) cout << (-B - sqrt(D))/(2*A) << " "<<(-B + sqrt(D))/(2*A)<<endl;

	} else if(B != 0) 
		if( C == 0) cout << 0 << endl;
		else cout << -C/B <<endl;
	else if (B==0) cout << "" <<endl;
	else 


	return 0;
}
