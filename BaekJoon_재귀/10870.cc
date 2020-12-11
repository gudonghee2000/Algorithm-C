#include <iostream>
#define MAX 10000
using namespace std;

int fib(int n){
    if(n==1)return 1;
    if(n==0)return 0;
    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    scanf("%d",&n);
    int b= fib(n);
    printf("%d",b);
    
    return 0;
}