#include <iostream>
#define MAX 15
using namespace std;

int fib(int n){
    if(n<2)
    return 1;
    else{
        return n*fib(n-1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a= fib(n);
    printf("%d",a);
    return 0;
}