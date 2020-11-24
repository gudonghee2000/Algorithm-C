#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;


int main() {
    char s[100];
    int t=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++){
        if(s[i] >='A' && s[i] <='C'){
            t +=3;
        }
        else if(s[i] >='D' && s[i] <='F'){
            t +=4;
        }
        else if(s[i] >='G' && s[i] <='I'){
            t +=5;
        }
        else if(s[i] >='J' && s[i] <='L'){
            t +=6;
        }
        else if(s[i] >='M' && s[i] <='O'){
            t +=7;
        }
        else if(s[i] >='P' && s[i] <='S'){
            t +=8;
        }
        else if(s[i] >='T' && s[i] <='V'){
            t +=9;
        }
        else if(s[i] >='W' && s[i] <='Z'){
            t +=10;
        }
    }
    printf("%d", t);
    return 0;
}