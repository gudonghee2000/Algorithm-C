#include <iostream>
#define MAX 50
using namespace std;

void checkrank(int *x, int*y,int n){
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<n; j++){
            if(x[i]<x[j] && y[i]<y[j])
            k++;
        }
        printf("%d ",k+1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int x[MAX];
    int y[MAX];
    for(int i=0; i<n;i++){
        scanf("%d %d",x+i,y+i);
    }
    
    checkrank(x,y,n);
    return 0;
}