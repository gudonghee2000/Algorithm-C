#include <iostream>

using namespace std;
int ret = -9999;
int ret2 = 9999;
bool alright(int i) {
    if (i < 2)return false;
    for (int x = 2; x <= i / x; x++) {
        if (i % x == 0) return false;
    }
    return true;
}

void check_koo(int number) {
    if (alright(number)) {
        printf("%d\n", number);
        return;
    }
    int f = 0;
    for (int i = 1; !f; i++) {
        if (alright(number - i)) {
            printf("%d ", number - i);
            f++;
        }
        if (alright(number + i)) {
            printf("%d", number + i);
            f++;
        }
    }
    printf("\n");
}

int main() {
    int n;
    int number;
    cin >> n;
    while (n--) {
        cin >> number;
        check_koo(number);
    }
    return 0;
}