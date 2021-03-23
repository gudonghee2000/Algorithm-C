#include <iostream>

using namespace std;

long long koo[6][6];
long long b;
long long ret[6][6] = {0,};
long long real[6][6] = {0,};
int n;

void solution_koo(int ys,int xs) {
	if (ys == n)return;
	if (xs == n)return;
	if (ret[ys][xs] != 0)return;
	for (int i = 0; i < n; i++) {
		ret[ys][xs] += real[ys][i] * koo[i][xs];
	}
	
	
	solution_koo(ys + 1, xs);
	solution_koo(ys, xs + 1);
}

void answer(int cnt) {
	if (cnt == b)return;
	solution_koo(0, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			real[i][j] = ret[i][j]%1000;
			ret[i][j] = 0;
		}
	}
	
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
	for (int i = 1; i < b; i++) {
		answer(1);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << real[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}