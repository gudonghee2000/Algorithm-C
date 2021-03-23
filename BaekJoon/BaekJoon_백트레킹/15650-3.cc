#include <iostream>

using namespace std;

int n, m;
int numbers[10];
int answer[10];
bool checker[10] = {false, };

void koo(int cnt,int tmp) {
	if (cnt == m) {
		for (int i = 0; i <m; i++) {
			
				cout << answer[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = tmp; i <=n; i++) {
		if (i> answer[cnt-1]) {
			
			answer[cnt] = i;
			koo(cnt + 1,tmp+1);
			
		}
	}
}

int main(){
	
	cin >> n;
	cin >> m;
	for (int i = 1; i <=n; i++) {
		numbers[i] = i;
	}

	koo(0,1);

	return 0;
}