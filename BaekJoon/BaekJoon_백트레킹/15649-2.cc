#include <iostream>
#define MAX 9
using namespace std;

int a[MAX];
bool check[MAX] = {0, };
int n, m;

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			check[i] = true;
			a[cnt] = i;
			dfs(cnt + 1);
			check[i] = false;
		}
	}
}

int main() {
	
	cin >> n;
	cin >> m;
	
	dfs(0);

	
	
	return 0;
}