/* protocol-name: //resource-name */

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

bool not_url_char(char c)
{
	// chars, in addition to alphanumerics, that can appear in a URL
	static const string url_ch = '~;/?:@=&$-_.+!*(),";

	// see whether c can appear in a URL and return the negative
	return !(isalnum(c) || find(url_ch.begin(),url_ch.end(),c) != url_ch.end());

}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e)
{
	return find_if(b,e,not_url_char);
}

vector<string> find_urls(const string& s)
{
	vector<string> ret;
	typedef string::const_iterator iter;
	iter b = s.begin(), e = s.end();

	// look trough the entire input
	while (b != e) {
		// look for one or more leters followed by ://

		b = url_beg(b,e);

		// if we found it
		if (b !=e) {
			// get the rest of the URL
			iter after = url_end(b,e);
			
			// remember the URL
			ret.push_back(string(b,after));

			// advance b and check for more URLs on this line
			b = after;
		}
	}
	return ret;
}

int main() {



	return 0;
}
