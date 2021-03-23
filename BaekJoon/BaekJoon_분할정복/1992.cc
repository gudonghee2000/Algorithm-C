#include <iostream>

using namespace std;

int n;
int koo[130][130];

void solution(int y_st, int x_st, int y_end, int x_end) {

	int check = koo[y_st][x_st];
	
	for (int i = y_st; i < y_end; i++) {
		for (int j = x_st; j < x_end; j++) {
			if (check == 0 && koo[i][j] == 1) {
				check = 2;
			}
			else if (check == 1 && koo[i][j] == 0) {
				check = 2;
			}
			if (check == 2) {
				cout << '(';
				solution(y_st, x_st, (y_st+y_end) / 2, (x_st+x_end) / 2);
				solution(y_st, (x_st + x_end) / 2, (y_st + y_end) / 2, x_end);
				solution((y_st + y_end) / 2, x_st, y_end, (x_st + x_end) / 2);
				solution((y_st + y_end) / 2, (x_st + x_end) / 2, y_end, x_end);
				cout << ")";
				return;
			}
		}
	}
	cout << check;
	return;
}

int main() {
	cin >> n;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			koo[i][j] = s[j] - '0';
		}
	}
	
	solution(0,0,n,n);


	return 0;
}