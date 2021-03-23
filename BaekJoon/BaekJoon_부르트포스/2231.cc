#include <iostream>

using namespace std;

void search(int n){
    
    int s;
    int sum;
    int l;
    
    for(int i=1; i<=n; i++){
        sum =i;
        s =i;
        while(s>0){
        l =s%10;
        sum +=l;
        s=s/10;
    }
    if(sum == n){
        printf("%d", i);
        return;
        }
    }
    printf("0");
}

int main() {
    int n;
    scanf("%d", &n);
    search(n);
    
    return 0;
}