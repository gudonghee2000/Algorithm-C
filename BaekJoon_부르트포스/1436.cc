#include <iostream>
#include<cstring>
using namespace std;


void check_about(int n){
    int m=666;
    while(n>0){
        char a[100000000];
        sprintf(a,"%d",m);
        for(int i=0; i<strlen(a); i++){
            if(a[i]=='6'&&a[i+1]=='6'&&a[i+2]=='6'){
                n--;
                break;
            }
        }
        m++;
        
    }
    printf("%d",m-1);
}

int main() {
    int n;
    scanf("%d", &n);
    check_about(n);
    return 0;
}