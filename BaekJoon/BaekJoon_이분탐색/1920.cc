#include <iostream>
#include <algorithm>

using namespace std;

int for_m[100001];
int for_n[100001];

bool compare(int a, int b) {
	if (a <b)return true;
	return false;
}

void binary_search(int i,int xs,int xn) {
	int tmp = (xn+xs) / 2;
	if (xs +1 == xn) {
		if (for_n[tmp] == for_m[i] || for_n[tmp + 1] == for_m[i]) {
			cout << 1 << "\n";
			return;
		}
		else {
			cout << 0 << "\n";
			return;
		}
			}
	if (for_m[i] > for_n[tmp]) {
		binary_search(i, tmp, xn);
	}
	else if (for_m[i] < for_n[tmp]) {
		binary_search(i, xs, tmp);
	}
	else if (for_m[i] == for_n[tmp]) {
		cout << 1<<"\n"; 
		return;
	}
	
	
}

int main() {
	int n;
	int m;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> for_n[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> for_m[i];
	}
	sort(for_n, for_n + n, compare);
	
	for (int i = 0; i < m; i++) {
		binary_search(i,0,n);
	}

	return 0;
}