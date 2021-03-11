#include <iostream>

using namespace std;

void quick_sort(int list[], int left, int right) {
	if (left >= right) {
		return;
	}
	int pivot = left;
	int i = pivot + 1;
	int j = right;
	int tmp;

	while (i <= j) {
		while (i<=right && list[i]<=list[pivot]) {
			i++;
		}
		while (j>=left && list[j] >=list[pivot]) {
			j--;
		}

		if (i > j) {
			tmp = list[j];
			list[j] = list[pivot];
			list[pivot] = tmp;
		}
		else {
			tmp = list[j];
			list[i] = list[j];
			list[j] = tmp;
		}
	}
	quick_sort(list, left, j - 1);
	quick_sort(list, j + 1, right);
}

int main() {
	
	int list[10] = { 4,1,2,3,9,7,8,6,10,5 };

	quick_sort(list, 0, 9);

	for (int i = 0; i <10; i++) {
		cout << list[i];
	}

	return 0;
}
