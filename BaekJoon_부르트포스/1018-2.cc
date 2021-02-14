#include <iostream>
#include <utility>
#include <cstring>
using namespace std;

int m, n;
char board[51][51];

char start_w[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
};

char start_b[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
};

int checker_w(int i, int j) {
	int cnt = 0;
	
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			if (start_w[y][x] != board[i + y][j + x])
				cnt++;
		}
	}
	
	return cnt;
	
}

int checker_b(int i, int j) {
	int cnt = 0;

	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			if (start_b[y][x] != board[i + y][j + x])
				cnt++;
		}
	}

	return cnt;

}

int main() {
	
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	int cnt_w;
	int cnt_b;
	int ret = 99999;

	for (int i = 0; i < m - 7; i++) {
		for (int j = 0; j < n - 7; j++) {
			cnt_w = checker_w(i, j);
			if (cnt_w < ret) {
				ret = cnt_w;
			}
		}
	}

	for (int i = 0; i < m - 7; i++) {
		for (int j = 0; j < n - 7; j++) {
			cnt_b = checker_b(i, j);
			if (cnt_b < ret) {
				ret = cnt_b;
			}
		}
	}
	cout << ret;
	return 0;
}