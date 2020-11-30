#include <iostream>

using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	int c = 0;
	while (n>0){
	if (n % 5 == 0) {
				n = n - 5;
				c++;
			}
	else if (n % 3 == 0) {
				n = n - 3;
				c++;
			}
	else if(n>5){
		n = n - 5;
		c++;
	}
			
		
	else{
			c = -1;
			break;
		}
		
		
	}
	printf("%d", c);


	return 0;
}