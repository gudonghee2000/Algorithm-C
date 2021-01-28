#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char koo[5][15] = {0,};
	int limit = 0;
	for (int i = 0; i < 5; i++) {
		cin >> koo[i];
		if (strlen(koo[i]) > limit) {
			limit = strlen(koo[i]);
		}
	}

	for (int i = 0; i <limit; i++) {
		for (int j = 0; j < 5; j++) {
			if (koo[j][i] == NULL) {
				continue;
			}
			printf("%c", koo[j][i]);
			
		}
	}


	return 0;
}