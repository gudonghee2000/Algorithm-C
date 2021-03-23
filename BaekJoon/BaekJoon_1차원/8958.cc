#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char ox[80];
    int n;
    int o=0;
    int m=0;
    scanf("%d\n", &n);
   
    for(int i=0; i<n; i++){
        
        cin >> ox;
        for(int h=0; h<strlen(ox); h++){
            if(ox[h] =='O'){
                o++;
                m +=o;
            }
            else{
                o =0;
            }
            
        }
        
        printf("%d\n",m);
        o=0;
        m=0;
    }
    
    return 0;
}