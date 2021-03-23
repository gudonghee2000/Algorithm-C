#include <iostream>

using namespace std;

int n;
int m;
int card[110];

int main() {
    
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    int ret = 0;
    int cnt;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int y = j + 1; y < n; y++) {
                cnt = card[i] + card[j] + card[y];
                if (cnt > ret && cnt <=m) {
                    ret = cnt;
                }
            }
        }
    }
    cout << ret;
    return 0;
}