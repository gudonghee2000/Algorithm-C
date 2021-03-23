#include <iostream>

using namespace std;

int main() {
    int a,b,v;
    scanf("%d %d %d",&a,&b,&v);
    int v1= v-a;
    int c;
    if(a==v){
        c=1;
    }
    else if(v1<=a-b){
        c=2;
    }
    else{
        if(v1%(a-b) == 0)
        c= (v1/(a-b))+1; 
        else{
            c= (v1/(a-b))+2;
        }
    }
    
    printf("%d",c);
    return 0;
}