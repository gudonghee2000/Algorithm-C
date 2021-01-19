#include <iostream>
#include <vector>
using namespace std;

int counter[10001];


int main() {
	int n;
	cin >> n;
	

	for (int i = 0; i < n; i++) {
		int c;
		scanf("%d" ,&c);
		counter[c]++;
	}

	for (int i = 0; i < 10001; i++) {
		while (counter[i] != 0) {
			printf("%d\n", i);
			counter[i]--;
		}
		
	}
	return 0;
}