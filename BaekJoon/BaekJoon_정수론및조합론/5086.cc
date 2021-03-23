#include <iostream>

using namespace std;

int main() {
	int a, b;
	while (1) {
		cin >> a;
		cin >> b;
		if (a == 0 && b == 0) {
			break;
		}
		if (a<b && b % a == 0) {
			printf("factor\n");
		}
		else if(a>b && a%b ==0){
			cout << "multiple\n";
		}
		else {
			cout << "neither\n";
		}
	}
	

	return 0;
}