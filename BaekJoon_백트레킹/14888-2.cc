#include <iostream>

using namespace std;

int n;
int numbers[110];
int tool[5];
int mi =1000000000+1;
int ma = -1000000000 -1;

void koo(int cnt, int plus, int minus, int multi, int div,int tmp,int gu) {
	if (cnt == n-1) {
		if (tmp > ma) {
			ma = tmp;
		}
		if (tmp < mi) {
			mi = tmp;
		}
		return;
	}
	
		if (plus > 0) {
			tmp = tmp + numbers[gu];
			koo(cnt + 1, plus - 1, minus, multi, div, tmp, gu + 1);
			tmp = tmp - numbers[gu];
		}
		if (minus > 0) {
			tmp = tmp - numbers[gu];
			koo(cnt + 1, plus, minus - 1, multi, div, tmp, gu + 1);
			tmp = tmp + numbers[gu];
		}
		if (multi > 0) {
			
			tmp = tmp * numbers[gu];
			koo(cnt + 1, plus, minus, multi - 1, div, tmp, gu + 1);
			
			tmp = tmp / numbers[gu];
		}
		if (div > 0) {
			int helper = tmp % numbers[gu];
			tmp = tmp / numbers[gu];
			koo(cnt + 1, plus, minus, multi, div - 1, tmp, gu + 1);
			tmp = tmp * numbers[gu]+helper;
		}
	
}

int main(){
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> tool[i];
	}
	
	int tmp = numbers[0];
	koo(0, tool[0], tool[1], tool[2], tool[3],tmp, 1);

	cout << ma << "\n";
	cout << mi;
	return 0;
}