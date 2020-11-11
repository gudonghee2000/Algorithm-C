#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for(int i = t; i>0; i--){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int m =i-1; m<t; m++){
            printf("*");
        }
        printf("\n");
    }

        
    
   
    return 0;
}