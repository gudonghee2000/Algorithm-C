#include <iostream>
#include <cstring>
using namespace std;



int main() {
    int n;
    int a[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    while(n >0){
        int min =a[0];
        int check =0;
        for(int i=1; i<n; i++){
            if(min>a[i]){
                min = a[i];
                check =i;
            
            }
        }
        printf("%d\n", min);
        if(check == n-1){
            n=n-1;
        }
        else{
            for(int j=check; j<n; j++){
                a[j] = a[j+1];
            }
            n=n-1;
        }
        
    }
    
   return 0;
}