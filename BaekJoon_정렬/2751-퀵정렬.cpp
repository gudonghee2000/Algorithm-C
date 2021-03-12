#include <iostream>
#include <algorithm>
using namespace std;

int n;
int list[1000100];

int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	sort(list, list + n);

	for (int i = 0; i < n; i++) {
		cout << list[i] << "\n";
	}
	return 0;
}