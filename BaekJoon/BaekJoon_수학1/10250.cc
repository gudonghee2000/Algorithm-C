#include <iostream>

using namespace std;



int main() {
    int t;
    int last=0;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int h,w,n;
        scanf("%d %d %d", &h,&w,&n);
        while(n>h){
           n=n-h;
           last++;
        }
      
        last++;
        
        if(last<10){
        printf("%d%d%d\n",n,0,last);
        }
        else{
            printf("%d%d\n",n,last);
        }
        last =0;
       
           
        
    }
    return 0;
}

