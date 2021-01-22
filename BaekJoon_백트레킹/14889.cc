#include <iostream>

using namespace std;

int n,ret;
int table[20][20];
int team1[10];
int team2[10];
int pick[20];

void updata() {
	int team1_size = 0, team2_size = 0;
	for (int i = 0; i < n; i++) {
		if (pick[i] == 1) {
			team1[team1_size++] = i;
		}
		else {
			team2[team2_size++] = i;
		}
	}
	int sum_1 = 0, sum_2 = 0;
	for (int i = 0; i < n / 2; i++) {
		for (int j = i+1; j < n / 2; j++) {
			sum_1 += (table[team1[i]][team1[j]] + table[team1[j]][team1[i]]);
			sum_2 += (table[team2[i]][team2[j]] + table[team2[j]][team2[i]]);
		}
	}

	if (ret > abs(sum_1 - sum_2)) {
		ret = abs(sum_1 - sum_2);
	}
}

void dfs(int cur, int team_cnt) {
	if (team_cnt == (n / 2)) {
		updata();
		return;
	}
	for (int i = cur; i < n; i++) {
		pick[i] = 1;
		dfs(i+1,team_cnt + 1);
		pick[i] = 0;
	}
	


}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++){
			cin >> table[i][j];
		}
	}
	ret = 1777777777;
	dfs(0,0);
	cout << ret;
	return 0;
}