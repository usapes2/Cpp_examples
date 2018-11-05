#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

/*! \class Route
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Route
{
public:
	Route(string s1,string s2){source = s1; destination = s2;};
	string getSource() {return source;}
	string getDestination() {return destination;}

private:
	string source;
	string destination; 
};			
int main(int argc, const char *argv[])
{
	
	Route  s1("Ny","La");
	return 0;
}
