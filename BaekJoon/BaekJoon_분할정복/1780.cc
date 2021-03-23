#include <iostream>

using namespace std;
int countzero = 0;
int countone = 0;
int countminus = 0;
int a[3000][3000];

void check(int xs, int ys, int n) {
	int tmp = a[xs][ys];
	for (int i = xs; i < xs+n; i++) {
		for (int j = ys; j <ys+n; j++) {
			if (tmp == 1 && a[i][j]!=1) {
				tmp = 3;
			}
			else if (tmp == 0 && a[i][j] != 0 ) {
				tmp = 3;
			}
			else if (tmp == -1 && a[i][j] != -1 ) {
				tmp = 3;
			}
			if (tmp == 3) {
				int div = n / 3;

				check(xs, ys, div);
				check(xs+div, ys, div);
				check(xs+div*2, ys, div);

				check(xs,ys+div,div);
				check(xs+div, ys+div, div);
				check(xs+div*2, ys+div,div);

				check(xs,ys+div*2,div);
				check(xs+div,ys+div*2,div);
				check(xs+div*2, ys+div*2,div);
				return;
			}
			
		}
	}
	if (tmp == 1) {
		countone++;

	}
	else if (tmp == 0) {
		countzero++;
	}
	else if (tmp == -1) {
		countminus++;
	}
	return;
}

int main() {
	int n; 
	cin >> n;
	for (int i = 0; i <n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	check(0, 0, n);
	cout << countminus << "\n";
	
	cout << countzero<<"\n";
	cout << countone << "\n";
	return 0;
}