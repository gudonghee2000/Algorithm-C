#include <iostream>
#include <string.h>
using namespace std;
int stack[10001];
int top = -1;
void push(int x) {
    stack[++top] = x;
}
int empty() {
    if (top < 0)return 1;
    else return 0;
}
void pop() {
    if (empty() == 1)printf("-1\n");
    else {
        printf("%d\n", stack[top]);
        stack[top--] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char str[10];
        scanf("%s", &str);
        if (strcmp(str, "push") == 0) {
            int x; cin >> x;
            push(x);
        }
        else if (strcmp(str, "top") == 0) {
            if (empty() == 1)cout << "-1" << "\n";
            else cout << stack[top] << "\n";
        }
        else if (strcmp(str, "pop") == 0) {
            pop();
        }
        else if (strcmp(str, "empty") == 0) {
            cout << empty() << "\n";
        }
        else {
            cout << top + 1 << "\n";
        }
    }
    return 0;
}


