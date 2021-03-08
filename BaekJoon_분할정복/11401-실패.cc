#include <iostream>

using namespace std;

int ret;

void koo(int n, int k) {
	if (n < k)return;
	if (k == 1) {
		int tmp = 1;
		for (int i = n-k+1; i <= n; i++) {
			tmp *= i;
		}
		ret += tmp;
		return;
	}
	else if (n == 1) {
		ret += 1;
		return;
	}
	else if(k<0 ||n<0) {
		return;
	}

	koo(n - 1, k - 1);
	koo(n - 1, k);
}

int main() {
	int n;
	int k;
	cin >> n;
	cin >> k;
	koo(n, k);
	cout << ret;
	return 0;
}