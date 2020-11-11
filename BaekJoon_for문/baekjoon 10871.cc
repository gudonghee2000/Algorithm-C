#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 10000
int main() {
    
    int n;
    int x;
    int arr[MAX];
    
    scanf("%d", &n);
    scanf("%d", &x);

    for(int i = 0; i<n; i++){
        scanf("%d",arr+i);
    }
    for(int i = 0; i<n; i++){
        if(arr[i]<x){
            printf("%d ", arr[i]);
        }
    }
    

        
    
   
    return 0;
}