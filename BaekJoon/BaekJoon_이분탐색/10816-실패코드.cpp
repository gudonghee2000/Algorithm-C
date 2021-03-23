#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
int m;
vector<int> koo_m;
vector<int> koo_n;

int lowwer_search(int a) {
	int left = 0, right = n - 1, mid;

	while (left<right) {
		mid = (right + left) / 2;
		if (koo_n[mid] >= a) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return right;
};

int upper_search(int a) {
	int left = 0,right = n - 1,mid;

	while (left < right) {
		mid = (left + right) / 2;
		if (koo_n[mid] > a) {
			right = mid;
		}
		else {
			left = mid+1;
		}
	}
	return right;
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

	for (int i = 0; i < m; i++) {
		int tmp = lowwer_search(koo_m[i]);
		int tmp2 = upper_search(koo_m[i]);
		cout << tmp2 - tmp<< " ";
	}


	return 0;
}