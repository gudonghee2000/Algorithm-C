#include <iostream>
#include <algorithm>

using namespace std;

int baby_numbers[50];
int n;

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> baby_numbers[i];
	}
	sort(baby_numbers, baby_numbers + n);

	int a = baby_numbers[0];
	int b = baby_numbers[n - 1];
	cout << a * b;

	return 0;
}