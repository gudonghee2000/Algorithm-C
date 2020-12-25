#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


int main() {
    int n;
    pair<int,int> koo[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d  %d", &koo[i].first, &koo[i].second);
    }
    sort(koo, (koo + n));


    for (int i = 0; i < n; i++) {
        printf("%d %d\n", koo[i].first, koo[i].second);
    }
    return 0;
}