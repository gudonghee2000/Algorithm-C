#include <iostream>
#include <cmath>
using namespace std;
int n;
int power_board[25][25];
bool all[25] = {false, };
int ret = 999999;

void team1(int cnt,int tmp) {
	if(cnt == n / 2) {
		int team1_score = 0;
		int team2_score = 0;
		for (int i = 1; i <= n; i++) {
			if (all[i] == true) {
				for (int j = 1; j <= n; j++) {
					if(all[j]==true)
					team1_score += power_board[i][j];
				}
			}
			else if (all[i] == false) {
				for (int j = 1; j <= n; j++) {
					if(all[j] == false)
					team2_score += power_board[i][j];
				}
			}
		}
		if (ret > abs((team1_score - team2_score)));
		{
			ret = abs((team1_score - team2_score));
		}
		return;
	}
	for (int i = tmp; i <= n; i++) {
		if (all[i]== false) {
			all[i] = true;
			team1(cnt + 1,tmp+1);
			all[i] = false;
		}
	}
}
	
int main(){
	
	cin >> n;
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> power_board[i][j];
		}
	}

	team1(0,1);
	cout << ret;
	return 0;
}