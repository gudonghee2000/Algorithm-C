#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
   int n;
   int a,b,c,d;
   int result;
   int count=0;
   scanf("%d",&n);
   result = n;
   while(1){
       a = n/10;
       b = n%10;
       c = (a+b)%10;
       d = (b*10)+c;
       n=d;
       count++;
       if(d==result)break;
       }
    printf("%d",count);
   
    return 0;
}