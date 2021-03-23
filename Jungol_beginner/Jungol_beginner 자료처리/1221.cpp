#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0) {
        printf("0! = 0\n");
        return 1;
    }
    else if (n == 1){
        printf("1! = 1\n");
        return 1;
    }
    else {
        printf("%d! = %d * %d!\n", n, n, n - 1);
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {

    int n;
    cin >> n;
    int tmp = fib(n);
    cout << tmp;

    return 0;
}