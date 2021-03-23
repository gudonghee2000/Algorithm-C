#include <iostream>

using namespace std;

int main() {
    int count=0;
    int n[100000];
    for(int i=0; i<9; i++){
        scanf("%d\n", n+i);
        
    }
    int a = n[0];
    for(int i = 1; i<9; i++){
        if(a<n[i]){
            a=n[i];
            count = i;
        }
        
    }
    
    
    printf("%d\n", a);
    printf("%d", count+1);
    return 0;
}