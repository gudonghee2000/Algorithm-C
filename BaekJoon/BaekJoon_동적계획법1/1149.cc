#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int house[1001][3];
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> house[i][j];		
		}
	}
	for (i = 1; i < n; i++) {
			house[i][0] += min(house[i - 1][1], house[i - 1][2]);
			house[i][1] += min(house[i - 1][0], house[i - 1][2]);
			house[i][2] += min(house[i - 1][0], house[i - 1][1]);

	}
	printf("%d\n", min(min(house[n-1][0], house[n-1][1]), house[n-1][2]));

	
	return 0;
}