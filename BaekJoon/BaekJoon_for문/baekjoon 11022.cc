#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int t;
    int a;
    int b;
    scanf("%d", &t);
    for(int i = 1; i<=t; i++){
        scanf("%d  %d", &a,&b);
        printf("Case #%d: ",i);
        printf("%d + %d = %d\n",a,b, a+b);
    }

        
    
   
    return 0;
}