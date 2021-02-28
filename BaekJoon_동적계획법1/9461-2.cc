#include <iostream>

using namespace std;

int main(){
	int t;
	int n;
	long long dp[101] = {0,1,1,1,2,2};
	for (int i = 6; i < 101; i++) {
		dp[i] = dp[i - 2] + dp[i - 3];
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << dp[n]<<"\n";
	}
	return 0;
}