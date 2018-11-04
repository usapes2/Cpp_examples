// A pointer is a variable that stores an address location
// Pointer notation is faster when working with arrays

// Pointers can allocate memroy dynamically
// Automatically sets to NULL

// & is read ampersand gets the address of the pies of data
//
/* 
 int number = 240 ; 
  int* numPtr ;
  numPtr = &number;
  cout << " The address of number is: "<< numPtr <<endl;
 */

// Sizes 

/*
 
	
   cout << "Size of boolean " << sizeof(bool) <<endl;
   cout << "Size of char " << sizeof(char) <<endl;
   cout << "Size of int " << sizeof(int) <<endl;
   cout << "Size of float " << sizeof(float) <<endl;
   cout << "Size of doubl " << sizeof(double) <<endl;
   cout << "Size of long " << sizeof(long) <<endl;

   int* intPtr;
   double* doublePtr;
   char* charPtr;
   cout << "Size of intPtr " << sizeof(intPtr) <<endl;
   cout << "Size of doublePtr " << sizeof(doublePtr) <<endl;
   cout << "Size of charPtr " << sizeof(charPtr) <<endl;


*/
// Pointers to arrays
/*

double values[10] ; 
double* pValue = values;

cout << values << endl;
cout << pValue << endl;

int numbers[10];
int* pNumbers = numbers;
for (int i = 0; i < 10; i++) {
	cout<< "numbers address " << i <<": "<< pNumbers +i <<endl;
}
*/
// Pointers to chars
/*

	char initial ='P' ;
	char* pInitial = &initial;
	// Problem
	cout << "Memory address for initial P: "<< pInitial<<endl;
	// Soluiton
	cout << "Memory address for initial P: "<< (void *) pInitial<<endl;
	// Soluiton
	cout << "Memory address for initial P: "<< static_cast<void*>(pInitial)<<endl;


	const char* f1{"Chuvak"};
	const char* f2{"Chto"} ;
	const char* f3{"ty Krutoy"} ;
	const char* f4{"Chuvak, Chuvak, Chuvak"};
	const char* f5{"Krutooooooy"};
	while (true) {
	int choice  ;  
	cin >> choice;
	switch (choice) {
		case 1:
			cout << f1<<endl;
			break;
		case 2:
			cout << f2<<endl;
			break;
		case 3:
			cout << f3<<" "<< f2<<endl;
			break;
		case 4:
			cout << f5<<" "<<endl;
			break;
		default:
			cout << "wtf" <<endl;
			
	}
	}	
*/
/*
	double testScores[5],sum = 0;
	double* ptestScores;
	ptestScores = testScores;
	for (int i = 0; i < 5; i++) {
		
	cout << "Enter the test scores: "<<endl;
	cin >> *(ptestScores + i);
	sum+=  *(ptestScores + i);
	}
	cout << sum << endl;
*/
#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, const char *argv[])
{
	return 0;
}
