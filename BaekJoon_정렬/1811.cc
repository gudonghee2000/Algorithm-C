#include <iostream>
#include <algorithm>

#include <string.h>
using namespace std;


string s[20100];

bool compare(string a, string b) {
	if (a.length() < b.length()) {
		return true;
	}
	else if (a.length() > b.length()) {
		return false;
	}
	else {
		return a < b;
	}
	
}

int main() {
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s+n, compare);
	
	for (int i = 0; i < n; i++) {
		if (s[i] == s[i - 1]) {
			continue;
		}
		cout << s[i] << "\n";
	}
	return 0;
}