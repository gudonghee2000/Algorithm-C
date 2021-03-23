#include <iostream>

using namespace std;

long long koo[6][6];
long long b;
long long ret[6][6] = {0,};
long long real[6][6];
int n;

void solution_koo(int ys,int xs) {
	if (ys == n)return;
	if (xs == n)return;
	for (int i = 0; i < n; i++) {
		ret[ys][xs] += real[ys][i] * koo[i][xs];
	}
	real[ys][xs] = ret[ys][xs];
	ret[ys][xs] = 0;
	solution_koo(ys + 1, xs);
	solution_koo(ys, xs + 1);
}

void answer(int cnt) {
	if (cnt == b)return;
	solution_koo(0, 0);
	answer(cnt + 1);
}

int main() {
	
	cin >> n;
	cin >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> koo[i][j];
			real[i][j] = koo[i][j];
		}
	}

	answer(0);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << real[i][j]%1000 << " ";
		}
		cout << "\n";
	}
	return 0;
}