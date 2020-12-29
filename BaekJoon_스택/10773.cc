#include <iostream>
#include <string.h>
#define MAX 100000
using namespace std;
int stack[MAX];
int k;
int t=-1;

bool isfull() {
    return t == MAX;
}
void push(int x) {
    stack[++t] = x;

}

int pop(){
    int m = stack[t--];
    return m;
}

int main() {
    scanf("%d", &k);
    
    for (int i = 0; i < k; i++) {
        int y;
        scanf("%d", &y);
        if (y == 0) {
            pop();
        }
        else {
            push(y);
        }
    }

    int result = 0;
    for (int i = 0; i <= t; i++) {
        result += stack[i];
    }
    printf("%d", result);
    return 0;
}