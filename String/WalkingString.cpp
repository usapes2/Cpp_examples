#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() { /*
	string sieveChars(50,'P');
	//cout << sieveChars;
	sieveChars.replace(0,2,"NN");
//	cout << sieveChars;
	
	for (int i =2; (i <= sieveChars.size() /2) -1 ; i++){
		// Find all the factors:
	for (int factor = 2; factor * i < sieveChars.size();factor++){
			sieveChars[factor * i] = 'N'; 
	cout << sieveChars[factor * i] << endl;} }

		cout << "Prime:"<<endl;
		// return the idx of the first 'P' element:
	for ( int i =2; i<=sieveChars.size(); i++)
		cout << sieveChars[i];
	cout <<endl;
		int j = sieveChars.find('P');
		

		// While not at the end of the string:
		while (j != sieveChars.npos) {
			// If the elem is P, the idx is a prime
			cout << j <<" ";
		// move past the last prime
			j++;
		// Find the next prime
			j = sieveChars.find('P',j);	
		}
		cout << "\n Not Prime:" <<endl;
		// Find the first elem valut != P:
		j = sieveChars.find_first_not_of('P');
		while(j != sieveChars.npos) {
			cout << j <<" ";
			j++;
			j = sieveChars.find_first_not_of('P',j);
		}
				
	
*/

	string s("01,3456,89,6666666");
	
	vector<string> v;

	int j = s.find(',');
	if( j != s.npos) {
		while (j != s.npos) {
			v.push_back(s.substr(0,j-1));
			s.replace(0,j+1,"");
			cout << s<< endl;
			j = s.find(',',j);	
		} 
	
	}
	for ( int i = 0 ; i < v.size() ; i++) {
		cout <<"#: "<<i<<" "<< v[i] <<endl;
	}

	//	cout << s.substr(0,v[1])<<endl;
	
	
	
	return 0;
}
