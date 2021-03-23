#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if ( a.size() == b.size()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	vector<string> koo;
	int n;
	cin >> n;
	string tmp;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		koo.push_back(str);
	}
	sort(koo.begin(), koo.end(),compare);
	for (int i = 0; i < n; i++) {
		if (tmp == koo[i])continue;
		cout << koo[i] << "\n";
		tmp = koo[i];
	}
	return 0;
}