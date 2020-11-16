
#include <iostream>

using namespace std;

int check_about(int n) {
	int k = n;
	while (n!=0) {
		k += n % 10;
		n = n / 10;
	}
	return k;
}

int main(){
	bool a[10001] = {false};
	for (int i = 1; i < 10001; i++) {
	    if(check_about(i)<=10001){
		int gu = check_about(i);
		a[gu] = true;
	    }
	}
	for (int i = 1; i < 10001; i++) {
		if (a[i] != true)printf("%d\n", i);
	}
	return 0;
}