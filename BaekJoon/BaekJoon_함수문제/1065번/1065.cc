#include <iostream>

using namespace std;

bool hansoo(int n) {
	int a = n;
	int k;
	int a1, a2, a3;
	if (0 < a) {
		if (a <= 9)
			return true;
		else if (a < 100) {
			return true;
		}
		else if (a < 1000) {
			a1 = a % 10;
			a2 = a / 10;
			a3 = a2 % 10;
			k = a2 / 10;
			if (k - a3 == a3 - a1)return true;
			else return false;
		}
		else if (a == 1000) {
			return false;

		}
		else false;
	}
	
}
int c = 0;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (hansoo(i)) {
			c++;
		}
	}
	printf("%d", c);
	return 0;
}