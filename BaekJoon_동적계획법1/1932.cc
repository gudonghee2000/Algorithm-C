#include <iostream>
#include <algorithm>
using namespace std;

int ret = 0;
int triagle[501][501];
int arr[501][501];

void check_triagle(int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <=i; j++) {
			if (j == 0) {
				arr[i][j] = triagle[i][j] + arr[i - 1][j];
			}
			else if (j == i) {
				arr[i][j] = triagle[i][j] + arr[i - 1][j - 1];
			}
			else {
				arr[i][j] = max(triagle[i][j] + arr[i - 1][j], triagle[i][j] + arr[i - 1][j - 1]);
			}
		}
	}
	int ret = arr[n - 1][0];
	for (int i = 1; i < n; i++) {
		if (ret < arr[n - 1][i]) {
			ret = arr[n - 1][i];
		}
	}
	cout << ret;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> triagle[i][j];
		}
	}
	arr[0][0] = triagle[0][0];
	check_triagle(n);
	
	return 0;
}