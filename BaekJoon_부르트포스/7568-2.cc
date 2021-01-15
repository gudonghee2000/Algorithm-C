#include <iostream>
#include <vector>
#include <utility>
using namespace std;


int main() {
	int n;
	cin >> n;
	pair<int, int> a[50];
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		cin >> a[i].second;
	}
	int rank = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i].first < a[j].first && a[i].second < a[j].second) {
				rank++;
			}
		}
			printf("%d ", rank);
			rank = 1;
		
	}
	return 0;
}