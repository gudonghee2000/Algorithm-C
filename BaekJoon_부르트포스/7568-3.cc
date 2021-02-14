#include <iostream>
#include <utility>
using namespace std;

int main() {
	pair<int, int> rank[60];
	int n;
	int ret[60];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rank[i].first;
		cin >> rank[i].second;
		ret[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)continue;
			else {
				if (rank[i].first < rank[j].first && rank[i].second < rank[j].second) {
					ret[i]++;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ret[i] << " ";
	}
	return 0;
}