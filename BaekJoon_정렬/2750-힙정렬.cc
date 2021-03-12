#include <iostream>

using namespace std;

void heap_sort(int *list, int n) {
	for (int i = 1; i < n; i++) {
		int child = i;
		while (child > 0) {
			int parent = (child-1)/2;
			if (list[child] > list[parent]) {
				int tmp = list[child];
				list[child] = list[parent];
				list[parent] = tmp;
			}
			child = parent;
		}
	}
}

int main() {
	int n;
	int list[1010];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	heap_sort(list, n);

	for (int i = n - 1; i >= 0; i--) {
		int tmp = list[i];
		list[i] = list[0];
		list[0] = tmp;
		heap_sort(list, i);
	}

	for (int i = 0; i < n; i++) {
		cout << list[i] << "\n";
	}
	return 0;
}