#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a=666;
	while (n>0) {
		char result[10];
		
		sprintf(result, "%d", a);
		for (int i = 0; i < strlen(result); i++) {
			if (result[i] == '6' && result[i + 1] == '6' && result[i + 2] == '6') {
				n = n - 1;
				break;
				
			}
		}
		a++;
		
	}
	printf("%d", a-1);
	return 0;
}