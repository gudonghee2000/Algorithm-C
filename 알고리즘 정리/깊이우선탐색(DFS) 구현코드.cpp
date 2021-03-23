#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n;
int m;
int v;
vector<int> koo[1010];
bool checker[1010] = { false, };


void dfs(int start) {
	checker[start] = true;
	stack<int> s;
	s.push(start);
	cout << start << " ";
	while (!s.empty()) {
		int x = s.top();
		s.pop();
		for (int i = 0; i < koo[x].size(); i++) {
			int y = koo[x][i];
			if (checker[y] != true) {
				checker[y] = true;
				cout << y << " ";
				s.push(x);
				s.push(y);
				break;
			}
		}
	}
	cout << "\n";
}

int main() {
	cin >> n;
	cin >> m;
	cin >> v;

	for (int i = 0; i < m; i++) {
		int one, two;
		cin >> one;
		cin >> two;

		koo[one].push_back(two);
		koo[two].push_back(one);
	}

	for (int i = 0; i < n; i++) {
		sort(koo[i].begin(), koo[i].end());
	}

	dfs(v);
	


	return 0;
}