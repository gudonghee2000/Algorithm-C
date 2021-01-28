#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int ret = 0;


int change(char t[]) {
    int len = strlen(t);
    for (int i = 0; i < len; i++) {
        ret = ret * 2 + (t[i] - '0');
    }
    return ret;
}

int main() {
    char line__2[35];
    cin >> line__2;
    printf("%d\n", change(line__2));

    return 0;
}