#include <iostream>

using namespace std;

int check_factor(int a, int b) {
	int tmp=1;
	int real;
	while (1) {
		if (a % tmp == 0 && b % tmp == 0) {
			real = tmp;
		}
		tmp++;
		if (tmp > a || tmp > b) {
			break;
		}
	}
	return real;
}

int check_multiple(int a, int b) {
	int tmp = a < b ? b : a;
	int real;
	while (1) {
		if (tmp % a == 0 && tmp % b == 0) {
			real = tmp;
			break;
		}
		tmp++;
	}
	return real;
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << check_factor(a,b) << "\n";
	cout << check_multiple(a,b);
	
	return 0;
}