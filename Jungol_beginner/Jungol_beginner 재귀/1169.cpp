#include <iostream>

using namespace std;

int ret[10] = { -1, };
int nn;
int m;
bool koo[10] = { false, };

void checker1(int n) {
    if (n > nn) {
        for (int i = 1; i < n; i++) {
            cout << ret[i] << " ";

        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= 6; i++) {
        ret[n] = i;
        checker1(n + 1);
    }
}

void checker2(int n) {
    if (n > nn) {
        for (int i = 1; i < n; i++) {
            cout << ret[i] << " ";

        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= 6; i++) {
        if (ret[n - 1] > i) {
            continue;
        }
        else {
            ret[n] = i;
            checker2(n + 1);
        }
    }
}

void checker3(int n) {
    if (n > nn) {
        for (int i = 1; i < n; i++) {
            cout << ret[i] << " ";

        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= 6; i++) {
        if (!koo[i]) {

            if (ret[n - 1] == i) {
                continue;
            }
            else {
                ret[n] = i;
                koo[i] = true;
                checker3(n + 1);
                koo[i] = false;
            }
        }
    }
}

int main() {


    scanf("%d %d", &nn, &m);

    if (m == 1)checker1(1);
    else if (m == 2)checker2(1);
    else if (m == 3)checker3(1);


    return 0;
}