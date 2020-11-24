#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;


int main() {
    char s1[10];
    char s2[10];
    scanf("%s %s", s1,s2);
    int k=s1[0];
    s1[0] = s1[2];
    s1[2]=k;
    
    int k2=s2[0];
    s2[0] = s2[2];
    s2[2]=k2;
    int num1 = atoi(s1);
    int num2 =atoi(s2);
    if(num1>num2){
        printf("%d", num1);
    }
    else {
        printf("%d", num2);
    }
    
    
    return 0;
}