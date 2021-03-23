#include <iostream>
#include <string>
#include <stdio.h>
#define MAX 100
using namespace std;

class stack {
    int top;
    char koo[100];
public:
    stack() { top =-1; }
    void push(char x) {
        koo[++top] = x;

    }

    char pop() {
        char tt = koo[top--];
        return tt;
    }
    char before() {
        int tmp = top - 1;
        return koo[tmp];
    }
    bool isempty() {
        return top == -1;
    }
};

int main() {
    string a;
    while (1) {
        
        stack result;
        getline(cin, a);
        
        if (a[0]=='.') {
            break;
        }
        for (int i = 0; i < a.length(); i++) {
            if(a[i] == '[' || a[i] == '(' || a[i] == ']'|| a[i] == ')')
                result.push(a[i]);
            if (result.before() == '(' && a[i] == ')') {
                result.pop();
                result.pop();
            }
            else if (result.before() == '[' && a[i] == ']') {
                result.pop();
                result.pop();
            }
        }

        if (result.isempty()) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
        
    }
    return 0;
}
