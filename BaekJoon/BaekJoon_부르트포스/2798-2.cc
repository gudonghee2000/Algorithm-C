#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int result = 0;
	for (int i = 0; i < n-2; i++) {
		
		for (int j = i + 1; j < n-1; j++) {
			
			for (int k = j + 1; k < n; k++) {
				int sum = 0;
				sum = a[i] + a[j] + a[k];
				if (sum > result && sum <= m) {
					result = sum;
				}
			}
		}
	}
	printf("%d", result);
	
	return 0;
}