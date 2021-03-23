#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 10000
int main() {
    
    int a= -1;
    int b = -1;
    while(true){
    scanf("%d", &a);
    scanf("%d", &b);
    if(a==0 && b==0){
        break;
    }
    printf("%d\n", a+b);

    
    }

   
    return 0;
}