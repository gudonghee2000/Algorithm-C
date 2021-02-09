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
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (koo[i] < koo[j]) {
				tmp = koo[i];
				for (int l = i; l > j; l--) {
					koo[l] = koo[l - 1];
				}
				koo[j] =tmp;
				break;
			}
		}
		for (int m = 0; m < n; m++) {
			printf("%d ", koo[m]);
		}
		printf("\n");
	}
	return 0;
}