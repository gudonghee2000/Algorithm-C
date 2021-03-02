#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int dp[1001][3];

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> dp[i][j];
		}
	}

	int ret1 = dp[0][0];
	int ret2 = dp[0][1];
	int ret3 = dp[0][2];
	int ret1_1;
	int ret2_2;
	int ret3_3;

	for (int i = 1; i < n; i++) {
		ret1_1 = min(dp[i][0] + ret2, dp[i][0] + ret3);
		ret2_2 = min(dp[i][1] + ret1, dp[i][1] + ret3);
		ret3_3 = min(dp[i][2] + ret1, dp[i][2] + ret2);
		ret1 = ret1_1;
		ret2 = ret2_2;
		ret3 = ret3_3;
	}
	int tmp = min(ret1, ret2);
	int fff = min(tmp, ret3);

	cout << fff<<"\n";
	return 0;
}