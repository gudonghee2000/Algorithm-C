#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int b = 1;
		while (1) {
		int result = 0;
		int c = b;
		while (c > 0) {	
			int one = c % 10;
			c = c / 10;
			result += one;
		}
		result += b;
		if (result == n) {
			cout << b;
			break;
		}
		else if (b >= n) {
			cout << 0;
			break;
		}
		else {
			b++;
		}
	}
	return 0;
}