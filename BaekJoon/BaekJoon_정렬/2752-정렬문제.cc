#include <iostream>
#define MAX 100
using namespace std;

void choice_sort(int *list,int st, int end) {
	if (st == end) return;
	int tmp = list[st];
	for (int i = st+1; i < end; i++) {
		if (tmp > list[i]) {
			int tt = tmp;
			tmp = list[i];
			list[i] = tt;
		}
	}
	list[st] = tmp;
	choice_sort(list, st + 1, end);
}

int main() {
	int n = 3;
	int list[5];
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	choice_sort(list, 0,n);

	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}

	return 0;
}