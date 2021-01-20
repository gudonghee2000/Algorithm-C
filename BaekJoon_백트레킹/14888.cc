#include <iostream>

using namespace std;
int mini = 9999999;
int maxi = -9999999;
int n;
int a[12];

int dfs(int cnt, int plus, int mins, int amt, int divide, int result) {
	if (cnt >= n) {
		if (mini > result) {
			mini = result;
		}
		if (maxi < result) {
			maxi = result;
		}
		return 0;
	}

	if (plus > 0) {
		int tmp_result = 0;
		tmp_result = a[cnt] + result;
		dfs(cnt + 1, plus - 1, mins, amt, divide, tmp_result);
	}
	if (mins > 0) {
		int tmp_result = 0;
		tmp_result = result - a[cnt];
		dfs(cnt + 1, plus, mins - 1, amt, divide, tmp_result);
	}
	if (amt > 0) {
		int tmp_result = 0;
		tmp_result = a[cnt] * result;
		dfs(cnt + 1, plus, mins, amt - 1, divide, tmp_result);
	}
	if (divide > 0) {
		int tmp_result = 0;
		tmp_result = result / a[cnt];
		dfs(cnt + 1, plus, mins, amt, divide - 1, tmp_result);
	}
}

int main() {
	int ppp;
	int nnn;
	int aaa;
	int ddd;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> ppp;
	cin >> nnn;
	cin >> aaa;
	cin >> ddd;


	dfs(1, ppp,nnn,aaa,ddd, a[0]);

	
	cout << maxi << "\n";
	cout << mini << "\n";
	return 0;
}