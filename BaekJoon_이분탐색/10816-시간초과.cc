#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
vector<int> koo_n;
int m;
vector<int> koo_m;

int binary_answer(int answer) {
	int left = 0, right = n - 1, mid;
	int ret = 0;

	while (left <= right) {
		mid = (right + left) / 2;
		if (answer > koo_n[mid]) {
			left = mid + 1;
		}
		else if (answer < koo_n[mid]) {
			right = mid - 1;
		}
		else if(answer == koo_n[mid]){
			ret++;
			for (int i = mid + 1; i <= right; i++) {
				if (answer == koo_n[i]) {
					ret++;
				}
				else if (answer < koo_n[i]) {
					break;
				}
			}
			for (int i = mid-1; i >= left; i--) {
				if (answer == koo_n[i]) {
					ret++;
				}
				else if (answer > koo_n[i]) {
					break;
				}
			}
			
			break;
		}
	}
	return ret;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		koo_n.push_back(tmp);
	}

	sort(koo_n.begin(), koo_n.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int tmp2;
		cin >> tmp2;
		koo_m.push_back(tmp2);
	}
	vector<int> ret;
	for (int i = 0; i < m; i++) {
		ret.push_back(binary_answer(koo_m[i]));
	}

	for (int i = 0; i < m; i++) {
		cout << ret[i] << " ";
	}

	return 0;
}