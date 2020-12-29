#include <iostream>

using namespace std;

int n;
bool checker[15][15] = {0,};

bool isrange(int x, int y, int m) {
    return x >= 0 && x < n&& y >= 0 && y<n;
}

bool isvalid(int x, int y) {
    int dx = 0;
    while (--y >= 0) {
        dx++;
        if (isrange(x,y,n) && checker[y][x])return false;
        if (isrange(x-dx,y,n) && checker[y][x - dx])return false;
        if (isrange(x+dx,y,n) && checker[y][x + dx])return false;
    }
    return true;
}


int solve(int y){
    if (y == n) {
        return 1;
    }
    int ret = 0;
    for (int x = 0; x < n; x++) {
        if (isvalid(x, y)) {
            checker[y][x] = true;
            ret += solve(y + 1);
            checker[y][x] = false;
        }
    }
    return ret;
}



int main() {
    scanf("%d", &n);
    printf("%d", solve(0));
    

    return 0;
}