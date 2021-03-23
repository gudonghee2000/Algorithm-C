#include <iostream>

using namespace std;

int a[9] = {0,};
bool k[9] = {0,};
int n;
int m;

void dfs(int cnt){
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        
            a[cnt] = i;
            dfs(cnt+1);
            
        
    }
}


int main() {
    
    scanf("%d %d", &n ,&m);
    dfs(0);


    return 0;
}