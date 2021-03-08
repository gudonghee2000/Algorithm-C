#include <iostream>

using namespace std;

int n;
int paper[3000][3000];
int minu = 0;
int zero = 0;
int one = 0;

void check(int ys, int xs,int n) {
	int tmp = paper[ys][xs];

	if (n == 1) {
		if (tmp == -1) {
			minu++;
			return;
		}
		else if (tmp == 0) {
			zero++;
			return;
		}
		else if (tmp == 1) {
			one++;
			return;
		}
	}

	for (int i = ys; i < ys+n; i++) {
		for (int j = xs; j < xs+n; j++) {
			if (tmp == -1 && paper[i][j] != -1) {
				tmp = 4;
			}
			else if (tmp == 0 && paper[i][j] != 0) {
				tmp = 4;
			}
			else if (tmp == 1 && paper[i][j] != 1) {
				tmp = 4;
			}
			if (tmp == 4) {
				check(ys, xs, n/3);
				check(ys, xs+n/3, n/3);
				check(ys, xs+(2*n/3), n/3);

				check(ys+n/3, xs, n / 3);
				check(ys+n/3, xs + n / 3, n / 3);
				check(ys+n/3, xs + (2 * n / 3), n / 3);

				check(ys+ (2 * n / 3), xs, n / 3);
				check(ys+(2 * n / 3), xs + n / 3, n / 3);
				check(ys+(2 * n / 3), xs + (2 * n / 3), n / 3);



				return;
			}
		}
	}
	if (tmp == -1) {
		minu++;
		return;
	}
	else if (tmp == 0) {
		zero++;
		return;
	}

	else if (tmp == 1) {
		one++;
		return;
	}
}

int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}

	check(0,0,n);

	cout << minu << "\n";
	cout << zero << "\n";
	cout << one << "\n";

	return 0;
}