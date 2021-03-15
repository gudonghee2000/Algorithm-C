#include <iostream>

using namespace std;

int tmp[10] = { 0, };

void quick_sort(int *list, int left,int right) {
	if (left >= right)return;
	int pivot = left;
	int start = left + 1;
	int end = right;
	int tmp;
	while (start <= end) {
		while (start <= right && list[start] <= list[pivot]) {
			start++;
		}
		while (end>left && list[end] >=list[pivot]) {
			end--;
		}
		if (end < start) {
			tmp = list[pivot];
			list[pivot] = list[end];
			list[end] = tmp;
		}
		else {
			tmp = list[end];
			list[end] = list[start];
			list[start] = tmp;
		}
	}
	quick_sort(list,left,end-1);
	quick_sort(list,end+1, right);
}

void heap_sort(int *list, int n) {
	for (int i = 1; i < n; i++) {
		int child = i;
		int parent;
		int tmp;
		while (child > 0) {
			parent = (child - 1) / 2;
			if (list[parent] < list[child]) {
				tmp = list[parent];
				list[parent] = list[child];
				list[child] = tmp;
			}
			child = parent;
		}
	}
}

void real_merge_sort(int *list, int left, int right) {
	int middle = (left + right) / 2;
	int l = left;
	int r = middle+1;
	int k = left;
	
	while (l <=middle&&r<=right) {
		if (list[l] <= list[r]) {
			tmp[k++] = list[l++];
		}
		else {
			tmp[k++] = list[r++];
		}
	}
	if (l > middle) {
		for(int i=r; i<=right; i++){
			tmp[k++] = list[i];
		}
	}
	else {
		for (int i = l; l <= middle; l++) {
			tmp[k++] = list[i];
		}
	}
	for (int i = left; i <= right; i++) {
		list[i] = tmp[i];
	}
}

void merge_sort(int* list, int left, int right) {
	if (left < right) {
		int middle = (left + right) / 2;

		merge_sort(list, left, middle);
		merge_sort(list, middle + 1, right);
		real_merge_sort(list, left, right);
	}
}

void quick() {
	int list[8] = {3,98,2,5,7,5,6,1 };
	int n = 8;
	quick_sort(list,0, 7);
	for (int i = 0; i < 8; i++) {
		cout << list[i] << " ";
	}

	cout << "\n";
}

void merge() {
	int list[8] = { 45,9,3,5478,2,1,6,36 };
	int n = 8;

	merge_sort(list, 0,n-1);

	for (int i = 0; i < 8; i++) {
		cout << list[i] << " ";
	}
}

void heap() {
	int list[7] = {3,895,12,754,215,965,16};
	int n = 7;

	heap_sort(list, n);
	

	for (int i = n - 1; i > 0; i--) {
		int tmp = list[i];
		list[i] = list[0];
		list[0] = tmp;
		heap_sort(list, i);
	}

	for (int i = 0; i < 7; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";
}

void counting() {
	int temp;
	int list[10] = { 1,5,5,3,4,9,9,1,2,2 };
	int count[10] = { 0, };
	
	for (int i = 0; i < 10; i++) {
		count[list[i]]++;
	}
	cout << "\n";
	for (int i = 1; i <= 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				cout << i << " ";
			}
		}
	}

}

int main() {

	quick();

	heap();

	merge();

	counting();
	return 0;
}