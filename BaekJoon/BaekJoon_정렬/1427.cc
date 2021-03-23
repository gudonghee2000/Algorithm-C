#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int n, int t){
    return n > t;
}

int main() {
    int n, tmp, cnt = 0;
    int a[10];
    scanf("%d", &n);
    while (n > 0) {
        tmp = n % 10;
        a[cnt] = tmp;
        cnt++;
        n = n / 10;
    }
    sort(a, a + cnt,compare);
    for (int i = 0; i < cnt; i++) {
        printf("%d", a[i]);
    }

    return 0;
}