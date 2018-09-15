// s.substr() copies an entire string
// s.substr(starting Idx, Number of chars)

// another techinique involves the use of the string iterators
// string.begin() and string.end() This treats the string like a 
// container object
// examaple string s(sourceString.begin(), sourceString.end())

// Cant be initialized with single char or with ASCII or other int values.
// !ERROR: string nothingDoing1('a')
// !ERROR: string nothingDoing2(0*37)

#include<iostream>
#include<string>
using namespace std;

void replaceChars(string& modifyMe, string findMe,string newChars) {
	// look in modifyMe for the "find string"
	// starting at position 0
	int i = modifyMe.find(findMe, 0);
	// did we find the string to replace?
	if ( i != string::npos)
		//replace the find string with newChars
		modifyMe.replace(i,newChars.size(),newChars);
}

int main() {
	string imBlank;

// quoted char array as a parameter to the string constructor
	string heyMom("Where are my socks?");

// initialized with the assignment
	string standardReply = "Beamed into deep"
		"space on wide angle dispersion?";

// initialized using already existing string
	string useThisOneAgain(standardReply);

// use a portion of either a Char array of a C++ string
// combine diff soucres of initialization data using operator + 
// use the string object's substr() member function to create a substr.

	string s1
		("0123456789");
	string s2
		("Anyting worth doing is worth overdoing.");
	string s3
		("I saw Elvis in a UFO.");
	string sRepetitive
		(50,'P');

// initialized from another string s(string,startIdx,numOfchar)
	string s4(s1,0,s1.size()); 

// copy all sorts of stuff
	string quotMe ="";
	quotMe= quotMe+"1"+"2" + s2;

// initialize with a single char
	string singleChar = "1";
	cout << singleChar<<endl;
	singleChar = singleChar +'1'; // can concatenate
	cout << singleChar <<endl;;
	

// substr(start Idx, # of chars)
	//cout << s1.substr(1,4) ;
// copy a single char using substr() last element
//	cout << s2.substr(s2.size()-1,1);

// change one char of a string thinking of string as a container

	s1[1] = '!'; // "!" won't work
	//cout << s1; 
	

/* =================== Appending Inserting Concatenating strings =========
 
SomeString.reserve(500); reserves internal space

SomeString.insert(startIdx,string)     at the IDX
SomeString.append(" WHAT TO APPEND" )  at the end
SomeString.replace(startIdx,#of Chars to eliminate,Replacement string) overwrite seq of chr w/ another group of chars



 
   */

	string bigNews("I saw Elvis in a UFO.");
	cout << bigNews <<endl;
// How much data have we actually got?
	cout << "Size = " << bigNews.size()<<endl;
// How much can we stroe w.o. reallocating
	cout << "Capacity = "<< bigNews.capacity()<<endl;
// Insert this string in bigNews immediately
// before bigNews[1]
	bigNews.insert(1,"0Thought0");
	cout << bigNews<<endl;
	cout << "Capacity = "<< bigNews.capacity()<<endl;
	bigNews.reserve(500);
	cout << "Capacity = "<< bigNews.capacity()<<endl;
	cout << "\n";
	bigNews.append("FFFFFFFFFFFFFFFFFF");
	cout << bigNews<<endl;

// Simple find-and-replace in strings
	string ss("A piece of text");
	string tag("$tag$");
	ss.insert(2,tag+' ');
	cout << ss <<endl;
	int start = ss.find(tag);
	cout <<"Indx of Tag in the string= "<<start<<endl;
	cout <<"Size of the tag= " << tag.size() <<endl;
	cout << "\n";
	cout <<ss.replace(start,tag.size(),"#"); // cant be used '#'

	cout <<"\n";
	/*
	string fun("1234567,89");
	replaceChars(fun,",","F");
	cout << fun << endl;
	*/	
	ss.replace(0,0,"9999");
	cout <<ss <<endl;

	string one("This");
	string two("1234");
	string mix = one + two +one + two[0] +"!" ;
	cout << "\n "<<mix<<endl;

	return 0;
}

