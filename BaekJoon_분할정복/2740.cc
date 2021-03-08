#include <iostream>

using namespace std;

int n, m;
int k;
int one[110][110];
int second[110][110];
int ret[110][110] = {0,};

void koo(int ys,int xs) {
	if (ys == n)return;
	if (xs == k)return;
	if (ret[ys][xs] != 0) return;
	for (int j = 0; j < m; j++) {
		ret[ys][xs] += one[ys][j] * second[j][xs];
	}
	koo(ys+1,xs);
	koo(ys, xs + 1);
}

int main() {
	
	cin >> n; 
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> one[i][j];
		}
	}
	cin >> m;
	cin >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> second[i][j];
		}
	}

	koo(0,0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << ret[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}