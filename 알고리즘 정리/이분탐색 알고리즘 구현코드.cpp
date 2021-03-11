#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void binary_search(int answer,int n,vector<int> koo) {
	int left = 0, right = n - 1, mid;
	int ret = -1;
	while (left <=right) {
		mid = (left + right) / 2;
		if (answer < koo[mid]) {
			right = mid - 1;
		}
		else if (answer > koo[mid]) {
			left = mid + 1;
		}
		else {
			ret = mid;
				break;
		}
	}
	if (ret == -1) {
		cout << "fail!!" << "\n";
	}
	else {
		cout << "find!!" << "\n";
	}
}

int main() {
	int n;
	vector<int> koo;
	int tmp;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		koo.push_back(tmp);
	}

	sort(koo.begin(), koo.end());
	int my_answer;
	cin >> my_answer;
	binary_search(my_answer,n, koo);
	return 0;
}