#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int a[500000];
int c[8001] = {0,};


int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		c[a[i] + 4000]++;
	}

	int averege = round(double(sum) / n);
	
	sort(a, a + n);

	int middle = a[(n-1) / 2];

	int checker = 0;
	int flag;
	for (int i = 0; i < 8001; i++) {
		if (checker < c[i]) {
			checker = c[i];
			flag = i;
		}
	}

	for (int i = flag + 1; i < 8001; i++) {
		if (c[i] == checker) {
			flag = i;
			break;
		}
	}


	int aaa = a[0];
	int bbb = a[n - 1];
	int range = bbb - aaa;
	int min = flag - 4000;
	printf("%d\n", averege);
	printf("%d\n", middle);
	printf("%d\n", min);
	printf("%d\n", range);

	
	
	return 0;
}