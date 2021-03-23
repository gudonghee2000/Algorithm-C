#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool checker_koo(bool *k) {
	if (k[0] ==true&& k[1] == true && k[2] == true && k[3] == true && k[4]== true )return true;
	else if(k[5] == true && k[6] == true && k[7] == true && k[8] == true && k[9]== true )return true;
	else if (k[11] == true && k[12] == true && k[13] == true && k[14] == true && k[10]== true )return true;
	else if (k[16] == true && k[17] == true && k[18] == true && k[19] == true && k[15]== true )return true;
	else if (k[21] == true && k[22] == true && k[23] == true && k[24] == true && k[20]== true )return true;
	else if (k[4] == true && k[8] == true && k[12] == true && k[16] == true && k[20]== true )return true;
	else if (k[0] == true && k[6] == true && k[12] == true && k[18] == true && k[24]== true )return true;
	else if (k[0] == true && k[5] == true && k[10] == true && k[15] == true && k[20]== true )return true;
	else if (k[1] == true && k[6] == true && k[11] == true && k[16] == true && k[21]==true )return true;
	else if (k[2] == true && k[7] == true && k[12] == true && k[17] == true && k[22]==true )return true;
	else if (k[3] == true && k[8] == true && k[13] == true && k[18] == true && k[23]== true )return true;
	else if (k[4] == true && k[9] == true && k[14] == true && k[19] == true && k[24]== true )return true;
	else return false;
}

int main() {
	
	int board[5][5];
	int real_board[50];
	int mc[5][5];
	int real_mc[50];

	bool koo[50];
	for (int i = 0; i < 50; i++) {
		koo[i] = false;
	}
	
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i <5; i++) {
		for (int j = 0; j <5; j++) {
			cin >> board[i][j];
			real_board[cnt1++] = board[i][j];
		}
	}

	for (int i = 0; i <5; i++) {
		for (int j = 0; j <5; j++) {
			cin >> mc[i][j];
			real_mc[cnt2++] = mc[i][j];
		}
	}

	int tmp = 0;
	int cnn =0;
	while (1) {
		if (checker_koo(koo)) {
			cnn += 1;
			if (cnn == 2)break;
		}

		for (int i = 0; i <25; i++) {
			if (real_board[i] == real_mc[tmp]) {
				koo[i] = true;
				break;
			}
		}
		
		tmp += 1;
		
	}
	
	
	cout << tmp+1;


	return 0;
}