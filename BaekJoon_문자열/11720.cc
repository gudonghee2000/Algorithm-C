#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	char c[100];
	int sum = 0;
	scanf("%s", c);
	for (int i = 0; i < strlen(c); i++) {
		sum += c[i] - '0';
	}
	printf("%d", sum);
	
	return 0;
}