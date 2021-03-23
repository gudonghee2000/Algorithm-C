#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[1000000];
    scanf("%s",s);
    int count[26];
    for(int i=0; i<26; i++){
        count[i] = 0;
    }
    
    for(int i=0; i<strlen(s); i++){
        for(int j=0; j<26; j++){
            if(s[i] == j+65 || s[i] == j+97){
                count[j]++;
                break;
                }
            
        }     
    }
    
    int x = count[0];
    char c;
    for(int i=0; i<26; i++){
        if(i==0){
            c=65;
        }
        else if(x <count[i]){
           x= count[i];
           c=(i+65); 
        }
        
    }
    int key =0;
    for(int i=0; i<26; i++){
        
        if( x== count[i]) key++;
        
    }
    if(key>=2)printf("?");
    else{
    printf("%c",c);
    }
   

    return 0;
    
    }
