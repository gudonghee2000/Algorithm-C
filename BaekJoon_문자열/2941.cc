#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;


int main() {
    char s[100];
    scanf("%s", s);
    int k=0;
    for(int i=0; i<strlen(s); i++){
        k++;
    }
    
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='c' && s[i+1] == '='){
            k --;  
            i++;
        }
        else if(s[i]=='c' && s[i+1] == '-'){
            k --;
            i++;
        }
        else if(s[i]=='d' && s[i+1] == 'z'&& s[i+2] == '='){
            k = k-2;
            i +=2;
        }
        else if(s[i]=='d' && s[i+1] == '-'){
            k --; 
            i++;
        }
        else if(s[i]=='l' && s[i+1] == 'j'){
            k --;
            i++;
        }
        else if(s[i]=='n' && s[i+1] == 'j'){
            k --;
            i++;
        }
        else if(s[i]=='s' && s[i+1] == '='){
            k --;
            i++;
        }
        else if(s[i]=='z' && s[i+1] == '='){
            k --;
            i++;
        }
        
        
    }
    printf("%d", k);
    
    return 0;
}