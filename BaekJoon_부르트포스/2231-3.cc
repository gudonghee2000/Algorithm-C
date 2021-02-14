#include <iostream>

using namespace std;

int main() {
	int n;
	int ret = 1;
	cin >> n;

	while (1) {
		int tt = ret;
		int com = 0;
		int tmp1;
		com += tt;
		while (tt>0) {
			tmp1 = tt % 10;
			com += tmp1;
			tt = tt / 10;
		}
		if (com == n) {
			cout << ret;
			break;
		}
		ret++;
		if (ret >= n) {
			cout << 0;
			break;
		}
	}
	return 0;
}