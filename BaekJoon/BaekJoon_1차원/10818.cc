#include <iostream>
#include <stdio.h>
using namespace std;
int n;
int main() {
    scanf("%d", &n);
    int *a = new int[1000000];
    for(int i = 0; i<n; i++){
        scanf("%d", a+i);
    }
    int check = a[0];
    int max = a[0];
    for(int i =1; i<n; i++){
        if(check > a[i]){
            check = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d %d",check,max);
    delete[] a;
    return 0;
}