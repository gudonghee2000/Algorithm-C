#include <iostream>

using namespace std;

int a[9] = {0,};
bool k[9] = {0,};
int n;
int m;

void dfs(int cnt, int num){
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = num; i <= n; i++) {
        
            a[cnt] = i;
            dfs(cnt+1,i);
            
        
    }
}


int main() {
    
    scanf("%d %d", &n ,&m);
    dfs(0, 1);


    return 0;
}