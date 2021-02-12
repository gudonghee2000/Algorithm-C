#include <iostream>

using namespace std;

int n, m;
int numbers[10];

void koo(int ret, int cnt, int sum) {
    if (cnt > n) {
        if (ret == sum) {
            for (int i = 1; i < cnt; i++) {
                cout << numbers[i] << " ";
            }
            cout << "\n";
        }
        return;
    }
    for (int i = 1; i <= 6; i++) {
        numbers[cnt] = i;
        ret += i;
        koo(ret, cnt + 1, sum);
        ret -= i;
    }
}

int main() {

    cin >> n;
    cin >> m;
    koo(0, 1, m);

    return 0;
}