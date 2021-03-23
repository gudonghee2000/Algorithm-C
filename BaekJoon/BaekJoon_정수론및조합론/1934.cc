#include <iostream>

using namespace std;

int checking(int a, int b) {
	int tmp = a * b;
	int m = 1;
	int real;
	while (1) {
		if (a % m == 0 && b % m == 0) {
			real = m;
		}
		m++;
		if (m > a || m > b)break;
	}
	return (tmp / real);
	
}

int main() {
	int t;
	int a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;
		cout << checking(a, b);
		cout << "\n";
	}

	return 0;
}