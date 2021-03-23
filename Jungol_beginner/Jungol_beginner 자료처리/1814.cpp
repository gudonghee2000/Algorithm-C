#include <iostream>

using namespace std;

int main() {
	int n;
	int arr[110];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int tmp;
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				cnt++;
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}