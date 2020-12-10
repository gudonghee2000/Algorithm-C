#include <iostream>
#define MAX 15
using namespace std;

int main() {
    int a[MAX][MAX] ={0,};
    for(int i=0; i<15; i++){
        a[0][i]=i;
    }
    for(int i=0; i<15; i++){
        a[i][1] = 1;
    }
    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++){
            a[i][j]= a[i-1][j]+ a[i][j-1];
        }
    }
    int t;
    int k,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d",&k);
        scanf("%d", &n);
        printf("%d\n",a[k][n]);
        
    }
    return 0;
}