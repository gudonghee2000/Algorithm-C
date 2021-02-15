#include <iostream>

using namespace std;

int n;
int board[20][20];
int ret = 0;

bool isrange(int x, int y, int m) {
	return x >= 0 && x < n&& y >= 0 && y < n;
}

bool condition(int i,int cnt) {
	int y = cnt;
	int x_1 = i;
	int x_2 = i;
	while (y>=0) {
		y--;
		x_1--;
		x_2++;
		if (isrange(i,y,n) &&board[y][i]==1)return false;
		if (isrange(x_1, y, n)&&board[y][x_1] == 1)return false;
		if (isrange(x_2, y, n)&&board[y][x_2] == 1)return false;
		
	}
	return true;
	
}

void koo(int cnt) {
	if (cnt == n) {
		ret++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (condition(i,cnt)) {
			board[cnt][i] = 1;
			koo(cnt + 1);
			board[cnt][i] = 0;
		}
	}

}

int main(){
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			board[i][j] = 0;
		}
	}

	koo(0);
	cout << ret;
	return 0;
}