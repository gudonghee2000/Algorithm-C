#include <iostream>

using namespace std;

void fib(int n) {
	int a = 1;
	int b = 0;
	int tmp = 0;
	for (int i = 0; i <=n; i++) {
			b = a;
			a = tmp;
			tmp = b + a;
		}
		printf("%d %d\n", b, a);
		return;
	
}

int main() {
	int t;
	int n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		fib(n);
	}

	return 0;
}