#include <iostream>
#define MAX 100
using namespace std;

int sort[100] = {0,};

void merge(int *list, int left, int right) {
	int l, r, k, mid;
	mid = (left + right) / 2;
	l = left;
	r = mid + 1;
	k = left;
	while (l <= mid && r <= right) {
		sort[k++] = list[l] <= list[r] ? list[l++] : list[r++];
	}

	if (l > mid) {
		for (int i = r; i <= right; i++) {
			sort[k++] = list[i];
		}
	}
	else {
		for (int j = l; j <=mid; j++) {
			sort[k++] = list[j];
		}
	}
	for (int a = left; a <= right; a++) {
		list[a] = sort[a];
	}
}


void mergeSort(int *list, int left, int right) {
	if (left == right)return;
	int mid;
	mid = (left + right) / 2;
	mergeSort(list, left, mid);
	mergeSort(list, mid + 1, right);
	merge(list, left, right);
}

int main() {
	int n;
	int list[MAX];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	mergeSort(list, 0,n-1);

	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}
	return 0;
}