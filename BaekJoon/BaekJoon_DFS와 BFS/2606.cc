#include <iostream>
#include <queue>

using namespace std;

bool computer_checker[101] = {false, };
vector<int> koo[101];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	computer_checker[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < koo[x].size(); i++) {
			int c = koo[x][i];
			if (computer_checker[c] != true) {
				q.push(c);
				computer_checker[c] = true;
			}

		}
	}
}

int main() {
	int n;
	int t;
	int line_first;
	int line_second;

	cin >> n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> line_first;
		cin >> line_second;
		koo[line_first].push_back(line_second);
		koo[line_second].push_back(line_first);
	}

	bfs(1);
	int ret = 0;
	for (int i = 2; i <=n; i++) {
		if (computer_checker[i] == true) {
			ret++;
		}
	}
	cout << ret;
	return 0;
}