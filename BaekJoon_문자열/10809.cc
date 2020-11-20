#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    scanf("%s",s);
    int a[26];
    for(int i=0; i<26; i++){
        a[i] = -1;
    }
    for(int i=0; i<strlen(s); i++){
        if(a[s[i]-97] == -1){
            a[s[i]-97]= i;
        }
        
    }   
    for(int i=0; i<26; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}