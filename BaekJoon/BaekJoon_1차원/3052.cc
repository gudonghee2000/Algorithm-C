#include <iostream>

using namespace std;

int main() {
    int n;
    int result[42];
    int count =0;
    for(int i=0; i<42; i++){
        result[i] = 0;
    }
    for(int i =0; i<10; i++){
        scanf("%d",&n);
        result[n%42] =+ 1;
    }
    
    for(int i =0; i<42; i++){
        if( result[i]>1){
            result[i] = 1;
        }
        
    }
    for(int i=0; i<42; i++){
        count +=result[i];
    }
   
        
    
    printf("%d",count);
    return 0;
}