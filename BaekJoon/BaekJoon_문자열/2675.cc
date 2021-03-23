#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        char s[21];
        int r;
        scanf("%d", &r);
        scanf("%s", s);
        for(int j=0; j<strlen(s); j++){
            for(int m=0; m<r; m++){
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    
    
    
    return 0;
}