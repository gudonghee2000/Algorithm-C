#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}
pair<int, int >a[100000];

int main() {
    
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].first, &a[i].second);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", a[i].first, a[i].second);
    }
    
    return 0;
}