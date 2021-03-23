#include <iostream>

using namespace std;

int main() {
    int board[100][100];
    int t;
    int x;
    int y;
    int ret = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            board[i][j] = 0;
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        cin >> y;
        for (int k = y; k < y + 10; k++) {
            for (int m = x; m < x + 10; m++) {
                board[k][m] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (board[i][j] == 1) {
                ret++;
            }
        }
    }
    printf("%d", ret);

    return 0;
}