#include <iostream>
#include <cstring>

#include <iostream>
using namespace std;
int a[100];
int cnt = 0;
void change_2(int n) {

    int tmp;
    while (n > 0) {
        tmp = n % 2;
        n = n / 2;
        a[cnt] = tmp;
        cnt++;
    }
}

void change_8(int n) {
    int tmp;
    while (n > 0) {
        tmp = n % 8;
        n = n / 8;
        a[cnt] = tmp;
        cnt++;
    }
}

void change_16(int n) {
    int tmp;
    while (n > 0) {
        tmp = n % 16;
        n = n / 16;
        a[cnt] = tmp;
        cnt++;
    }
}
int main() {
    int n;
    int changer;
    cin >> n;
    cin >> changer;
    if (changer == 2) {
        change_2(n);
        for (int i = cnt - 1; i >= 0; i--) {
            cout << a[i];
        }
        cout << "\n";
    }
    else if (changer == 8) {
        change_8(n);
        for (int i = cnt - 1; i >= 0; i--) {
            cout << a[i];
        }
        cout << "\n";
    }
    else if (changer == 16) {
        change_16(n);
        for (int i = cnt - 1; i >= 0; i--) {
            if (a[i] == 11) { cout << 'B'; }
            else if (a[i] == 10) { cout << 'A'; }
            else if (a[i] == 12) { cout << 'C'; }
            else if (a[i] == 13) { cout << 'D'; }
            else if (a[i] == 14) { cout << 'E'; }
            else if (a[i] == 15) { cout << 'F'; }
            else cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}