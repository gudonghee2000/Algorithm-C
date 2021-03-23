#include <iostream>
using namespace std;

void fib(int m) {
	int a = 1;
	int b = 0;
	int c;
	if (m == 1) {
		printf("0 1\n");
	}
	else if (m == 0) {
		printf("1 0\n");
	}
	else{
		for (int i = 1; i < m; i++) {
			c = a + b;
			b = a;
			a = c;
		}
		printf("%d %d\n", b, a);
	
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int m;
		cin >> m;
		fib(m);
	}
	return 0;
}