#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s ;
    getline(cin,s);

	int index = -1;
	char fnc = ' ';

	for (auto i : s) {
		if (count(s.begin(), s.end(), i) == 1) {
			fnc = i;
			break;
		}
		else {
			index += 1;
		}
	}
	if (index == s.size()-1) {
		cout << "-1"<< endl;
	}
	else {
		cout << fnc<< endl;
	}
	return 0;
}
