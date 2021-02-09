#include <iostream>

using namespace std;


int main() {
    int n;
    int koo[110];
    int min = 9999;
    int min_cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &koo[i]);
        if (min > koo[i]) {
            min = koo[i];
            min_cnt = i;
        }
    }
    int tmp;
    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        tmp = koo[i];
        koo[i] = min;
        koo[min_cnt] = tmp;
        for (int j = 0; j < n; j++) {
            printf("%d ", koo[j]);
        }
        printf("\n");
        cnt++;
        min = 9999;
        for (int t = cnt; t < n; t++) {
            if (min > koo[t]) {
                min = koo[t];
                min_cnt = t;
            }
        }
    }
    return 0;
}