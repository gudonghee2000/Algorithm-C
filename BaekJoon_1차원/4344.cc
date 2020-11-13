#include <iostream>
#include <string.h>
using namespace std;

int main() {
   int c;
   int n, ka =0, sum =0;
  
   scanf("%d", &c);
   for(int i=0; i<c; i++){
       int n, ka =0, sum =0;
       float last;
       float result;
       scanf("%d", &n);
       int score[n];
       for(int j=0; j<n; j++){
         scanf("%d", &score[j]);
         sum += score[j];
       }
       result = (float)sum/(float)n;
       for(int m=0; m<n; m++){
           if(score[m]>result){
             ka++;
           }
       }
       last =((float)ka/n*100);
       printf("%.3f%%\n", last);
      
     
       
      
   }
    return 0;
}
