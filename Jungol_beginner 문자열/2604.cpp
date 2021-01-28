#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char dish[51];
    cin >> dish;
    int ret = 0;
    for (int i = 0; i < strlen(dish); i++) {
        if (dish[i] == '(' && dish[i - 1] == '(') {
            ret += 5;
        }
        else if (dish[i] == '(' && dish[i - 1] == ')') {
            ret += 10;
        }
        else if (dish[i] == ')' && dish[i - 1] == '(') {
            ret += 10;
        }
        else if (dish[i] == ')' && dish[i - 1] == ')') {
            ret += 5;
        }
        else {
            ret += 10;
        }
    }
    printf("%d", ret);
    return 0;
}