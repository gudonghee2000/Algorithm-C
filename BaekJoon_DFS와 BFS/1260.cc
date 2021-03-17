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
bool checker2[1010] = { false, };

void bfs(int start) {
	checker2[start] = true;
	queue<int> q;
	q.push(start);
	
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < koo[x].size(); i++) {
			if (!checker2[koo[x][i]]) {
				q.push(koo[x][i]);
				checker2[koo[x][i]] = true;
			}
		}
	}
	cout << "\n";
}

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
	
	bfs(v);

	return 0;
}