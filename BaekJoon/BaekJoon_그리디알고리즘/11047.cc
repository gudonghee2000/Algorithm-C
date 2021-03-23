#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int a[10];
int cnt = 0;

int main() {
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = n - 1; i >= 0; i--) {
		if (k >= a[i]) {
			cnt += k / a[i];
			k = k% a[i];
		}
		else if (i == 0 && k > 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}