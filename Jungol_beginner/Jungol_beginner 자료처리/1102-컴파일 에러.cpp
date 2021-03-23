#include <iostream>
# define MAX 101;
using namespace std;

class koo_stack {
    int top=-1;
    int a[MAX];
public:
    koo_stack() { top = -1; }
    bool isempty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    void push(int x) {
        top = top + 1;
        a[top] = x;
    }
    int pop() {
        if (isempty()) {
            return 0;
        }        
        else {
            int tmp = a[top--];
            return tmp;
        }
    }
    int siz() {
        int tmp = 0;
        for (int i = 0; i < top; i++) {
            tmp++;
        }
        return tmp;
    }

};

int main() {
    koo_stack koo;
    int n;
    char orde;
    int tmp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%c", &orde);
       
        if (orde == 'i') {
            cin >> tmp;
            koo.push(tmp);
            
        }
        else if (orde == 'o') {
            if (!koo.isempty()) {
                cout << koo.pop()<<"\n";
            }
            else {
                cout << "empty" << "\n";
            }
        }
        else if (orde == 'c') {
            cout << koo.siz() << "\n";
        }
    }
    return 0;
}