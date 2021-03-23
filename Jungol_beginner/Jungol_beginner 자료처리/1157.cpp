#include <iostream>

using namespace std;

int main() {
	int n;
	int koo[110];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> koo[i];
	}
	
	int tmp;
	
	for (int i = 0; i <n-1; i++) {
		for (int j = 0; j < n-1; j++) {
			if (koo[j] > koo[j+1]) {
				tmp = koo[j];
				koo[j] = koo[j+1];
				koo[j+1] = tmp;
			}
		}

		for (int j = 0; j < n; j++) {
			printf("%d ", koo[j]);
		}
		printf("\n");
	}
	return 0;
}