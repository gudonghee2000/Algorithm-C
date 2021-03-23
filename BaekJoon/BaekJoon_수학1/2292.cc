#include <iostream>

using namespace std;

  
 
int main() {
    int n;
    scanf("%d", &n);
    int result =6;
    int c =0;
    int m=1;
    n = n-1;
    c++;
   
    while(n>0){
        n = n- result*m;
        m++;
        c++;
            
          } 
        
    printf("%d", c);
    return 0;
}