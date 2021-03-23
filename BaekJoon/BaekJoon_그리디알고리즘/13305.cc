#include <iostream>

using namespace std;

int n;
long long road[100001];
long long oil_money[100001];


int main() {
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> road[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> oil_money[i];
	}

	long start_money = oil_money[0];
	long now_road = road[0];
	int best = 1;
	long long ret = 0;
	

	while (1) {
		if (best == n - 1) {
			ret += now_road * start_money;
			break;
		}
		if (start_money >= oil_money[best]) {
			ret += now_road * start_money;
			start_money = oil_money[best];
			now_road = road[best];
		}
		else if (start_money < oil_money[best]) {
			now_road += road[best];
		}
		best++;
	}
	cout << ret;
	return 0;
}