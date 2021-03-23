#include <iostream>
using namespace std;

int check_first(int first) {
	if (first == 0) return 0;
else if (first == 1) {
		return 5000000;
	}
	else if (first <= 3) {
		return 3000000;
	}
	else if (first <= 6) {
		return 2000000;
	}
	else if (first <= 10) {
		return 500000;
	}
	else if (first <= 15) {
		return 300000;
	}
	else if (first <= 21) {
		return 100000;
	}
	else {
		return 0;
	}
}

int check_second(int second) {
	if (second == 0) return 0;
	else if (second == 1)return 5120000;
	else if (second <= 3) return 2560000;
	else if (second <= 7)return 1280000;
	else if (second <= 15)return 640000;
	else if (second <= 31)return 320000;
	else return 0;


}


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int first=0;
		int second=0;
		cin >> first;
		cin >> second;
		int a = check_first(first);
		int b= check_second(second);
		cout << a + b << "\n";
	}
	return 0;
}