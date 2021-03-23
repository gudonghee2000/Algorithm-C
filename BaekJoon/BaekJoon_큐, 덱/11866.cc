#include <iostream>
#include <queue>
using namespace std;



int main() {
   int n,k;
   scanf("%d %d", &n, &k);
   queue<int> result;
   
   for(int i=1; i<=n; i++){
       result.push(i);
   }
   
   printf("<");
   while(!result.empty()){
       for(int i=0; i<k-1; i++){
       result.push(result.front());
       result.pop();
       }
      
       printf("%d",result.front());
       result.pop();
      if(!result.empty()){
          printf(", ");
      }
       
   }
  
   printf(">");
   
    return 0;
}