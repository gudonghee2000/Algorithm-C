#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int t;
    int a;
    int b;
    scanf("%d", &t);
    for(int i = 1; i<=t; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", a+b);
    }

        
    
   
    return 0;
}