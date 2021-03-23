#include <iostream>

using namespace std;

long long fac(int n) {
    if (n == 1) {
        cout << "1! = 1\n";
        return 1;
    }
    else {
        printf("%d! = %d * %d!\n", n, n, n - 1);
        return n * fac(n - 1);
    }
}

int main() {

    int n;
    cin >> n;
    long long tmp = fac(n);

    cout << tmp;

    return 0;
}