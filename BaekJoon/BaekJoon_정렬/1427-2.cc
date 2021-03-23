#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;



int main() {

	int n;
	cin >> n;
	vector<char> koo;
	char a[2];
	while (n > 0) {
		int t = n % 10;
		sprintf(a, "%d", t);
		n = n / 10;
		koo.push_back(*a);
	}
	sort(koo.begin(), koo.end(), greater<int>());
	
	for (int i = 0; i < koo.size(); i++) {
		printf("%c", koo[i]);
	}
	return 0;
}