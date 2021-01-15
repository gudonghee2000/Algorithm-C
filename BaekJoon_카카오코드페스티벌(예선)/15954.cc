#include <iostream>
#include <math.h>
using namespace std;

int a[500];

int main() {
	int n;
	int k;
	long double master = 9999999999999;
	cin >> n;
	cin >> k;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i <n-k+1; i++) {
		int cnt = i;
		int cnt2 = cnt;

		long double koo = 0;
		long double koo2 = 0;

		int t = k;
		int t2 = k;
		int t3 = k;
		
		while (t > 0) {
			koo += a[cnt];
			cnt++;
			t--;
		}
		koo = koo / (long double)t2;
		while (t2 > 0) {
			koo2 += (a[cnt2]-koo)* (a[cnt2] - koo);
			cnt2++;
			t2--;
		}
		koo2 = koo2 / (long double)t3;
		koo2 = sqrt(koo2);
		if (master > koo2) {
			master = koo2;
		}
	}
	
	printf("%.11Lf\n", master);

	return 0;
}