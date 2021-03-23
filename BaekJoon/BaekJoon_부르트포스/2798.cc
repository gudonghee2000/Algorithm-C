#include <iostream>
#define MAX 100
using namespace std;

void search(int *a,int n,int m){
    int p=0;
    int result=0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                p=a[i]+a[j]+a[k];
                if(p>result&&p<=m)
                result = a[i]+a[j]+a[k];              
            }
        }
    }
    printf("%d",result);
}

int main() {
   int n,m;
   scanf("%d %d", &n, &m);
   int a[100]={0,};
   for(int i=0; i<n; i++){
       scanf("%d",&a[i]);
   }
   search(a,n,m);    
    return 0;
}