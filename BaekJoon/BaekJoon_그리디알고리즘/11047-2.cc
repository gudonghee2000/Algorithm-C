#include <iostream>

using namespace std;

int n, k;
int coin[11];
int ret = 0;
int tmp;
void checker(int cnt) {
	if (k / coin[cnt] == 0) {
		return;
	}
	else {
		tmp = k / coin[cnt];
		k = k%coin[cnt];
		ret += tmp;
	}
}


int main() {	
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		checker(i);
	}

	cout << ret;
	
	return 0;
}