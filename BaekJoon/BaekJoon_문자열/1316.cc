#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
  
    
    char s[101];
    int cnt =0;
    for(int i=0; i<n; i++){
        scanf("%s", s);
        bool result =true;
        for(int j=0; j<strlen(s); j++){
            for(int k =0; k<j; k++){
                if(s[j]!=s[j-1] && s[j] == s[k]){
                    result=false;
                    break;
                }
              
               
            }
        
        }
        
        if(result)cnt++;
        
    }
    printf("%d",cnt);
    return 0;
}