#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int p[1000];
	int result[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p + n);
	result[0] = p[0];
	for (int i = 1; i < n; i++) {
		result[i] = p[i] + result[i-1];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += result[i];
	}
	printf("%d\n", sum);
	return 0;
}