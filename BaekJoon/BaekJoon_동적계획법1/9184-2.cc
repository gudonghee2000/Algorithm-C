#include <iostream>
#include <utility>
using namespace std;

int numbers[21][21][21];


int w(int a, int b, int c) {
	
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}

	else if (a>20 || b>20 || c>20) {
		if (numbers[20][20][20] != -1) {
			return numbers[20][20][20];
		}
		else {
			return numbers[20][20][20] = w(20, 20, 20);
		}
	}

	else if(a<b && b<c) {
		if (numbers[a][b][c] != -1) {
			return numbers[a][b][c];
		}
		else {
			return numbers[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		}
	}
	else {
		if (numbers[a][b][c] != -1) {
			return numbers[a][b][c];
		}
		else {
			return numbers[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
		}
	}
	
}

int main(){
	int a, b, c;
	
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			for (int y = 0; y < 21; y++) {
				numbers[i][j][y] = -1;
			}
		}
	}
	while (1) {
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == -1 && b == -1 && c == -1)break;
		printf("w(%d, %d, %d) = %d", a, b, c, w(a, b, c));
		cout << "\n";
	}

	return 0;
}