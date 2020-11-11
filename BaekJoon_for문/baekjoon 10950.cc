#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int T;
    int A;
    int B;
    scanf("%d\n", &T);
    for (int i=0; i<T; i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    
        
    
   
    return 0;
}