#include <iostream>
using namespace std;
int dp[21][21][21];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	}
	else if(a<b && b<c) {
		if (dp[a][b][c] != 0) return dp[a][b][c];
		else {
			return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		}
	}
	else {
		if (dp[a][b][c] != 0) return dp[a][b][c];
		else {
			return dp[a][b][c] = w(a-1, b, c ) + w(a - 1, b - 1, c ) + w(a-1, b , c-1) - w(a - 1, b-1, c - 1);
		}
	}
}


int main() {
	int a=0, b=0, c=0;

	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			for (int k = 0; k < 21; k++) {
				dp[i][j][k] = 0;
			}
		}
	}
	while (1) {
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == -1 && b == -1 && c == -1)break;
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a, b, c));
	}


	return 0;
}