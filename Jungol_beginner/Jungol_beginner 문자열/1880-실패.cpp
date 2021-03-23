#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char koo[100];
    char s[100];

    gets_s(koo);
    gets_s(s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        }
    }

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            printf(" ");
        }
        else if (i == 0) {
            printf("%c", koo[s[i] - 97] - 32);
        }
        else {
            printf("%c", koo[s[i] - 97]);
        }
    }
    return 0;
}