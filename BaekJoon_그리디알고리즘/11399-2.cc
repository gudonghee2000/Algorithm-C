#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>a , pair<int,int >b) {
	if (a.second < b.second) {
		return true;
	}
	else if(a.second == b.second) {
		if (a.first < b.first) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

int main() {	
	int n;
	pair<int, int> koo[100001];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> koo[i].first;
		cin >> koo[i].second;
	}
	
	int cnt = 1;
	sort(koo, koo + n, compare);
	
	int end = koo[0].second;

	for (int i = 1; i < n; i++) {
		if (end <= koo[i].first) {
			cnt++;
			
			end = koo[i].second;
		}
	}
	cout << cnt;


	return 0;
}