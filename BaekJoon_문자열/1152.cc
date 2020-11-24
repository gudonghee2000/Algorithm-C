#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[1000001];
    int k =0;
    scanf("%[^\n]",s);
    for(int i=0; i<=strlen(s); i++){
        if(s[i] ==' '|| s[i] =='\0'){
            
            k++;
            
        }
        
    }
    if(s[0] == ' '&&s[strlen(s)-1] != ' '){
        printf("%d",k-1);
    }
    else if(s[strlen(s)-1] == ' '&&s[0] != ' ')
        printf("%d",k-1);
    else if(s[0] == ' ' && s[strlen(s)-1] == ' '){
        printf("%d",k-2);
    }
    else {
        printf("%d",k);
    }
    return 0;
}