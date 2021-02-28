#include <iostream>

using namespace std;

int main(){

	int n;
	long long dp[1000001];
	
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] = dp[i] % 15746;
	}
	cout << dp[n];

	return 0;
}