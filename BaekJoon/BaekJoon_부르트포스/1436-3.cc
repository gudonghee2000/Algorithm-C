#include <iostream>
#include <utility>
#include <cstring>
using namespace std;

int main() {
	int n;
	char koo[20];
	int number = 1;
	int cnt = 0;

	cin >> n;
	while (1) {
		sprintf(koo, "%d", number);
		for (int i = 0; i < strlen(koo); i++) {
			if (koo[i] == '6' && koo[i + 1] == '6' && koo[i + 2] == '6')
			{
				cnt++;
				break;
			}
		}
		if (cnt == n)break;
		number++;
	}
	cout << number;
	return 0;
}