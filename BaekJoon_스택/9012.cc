#include <iostream>
#include <string.h>
#define MAX 50
using namespace std;

class check_stack {
    int top;
    char rrr[MAX];
public:
    check_stack() { top = -1;}
    bool isempty() {
        return top == -1;
    }
    bool isfull() {
        return top == MAX;
    }
    void push( char a){
        if (isfull()) {
            printf("꽉참");
            return;
        }        
        rrr[++top] = a;
        
    }
    char pop() {
        if (isempty()) {
            printf("빔");
            return 0;
        }
        char re = rrr[top--];
        return re;
    }

    char before() {
        int mmm = top - 1;
        return rrr[mmm];
    }
    
};

int main() {
    int t;
    scanf("%d", &t);
    
    char k[50];
    char mdf[50];
    for (int i = 0; i < t; i++) {
        check_stack a;
        scanf("%s", &k);
        
        for (int j = 0; j < strlen(k); j++) {
            a.push(k[j]);
            if (a.before() == '(' && k[j] == ')') {
                a.pop();
                a.pop();
            }
        }
      
        if (!a.isempty()) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
        
        

    }
    return 0;
}


