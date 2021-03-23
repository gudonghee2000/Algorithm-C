#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int paper[110][110];
    int t;
    int x, y;
    int ret = 0;

    for (int i = 1; i < 101; i++) {
        for (int j = 1; j < 101; j++) {
            paper[i][j] = 0;
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x;
        cin >> y;
        for (int k = x; k < x + 10; k++) {
            for (int m = y; m < y + 10; m++) {
                paper[k][m] = 1;
            }
        }
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (paper[i][j] == 1) {
                if (paper[i + 1][j] == 0)ret++;
                if (paper[i - 1][j] == 0)ret++;
                if (paper[i][j + 1] == 0)ret++;
                if (paper[i][j - 1] == 0)ret++;
            }
        }
    }
    cout << ret;




    return 0;
}