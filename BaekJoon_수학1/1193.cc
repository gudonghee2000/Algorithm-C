#include <iostream>

using namespace std;


int main() {
    int x;
    scanf("%d",&x);
    int i=1;
    int up=0;
    int down=0;
    while(x>i){
        x= x-i;
        i++;
    }
    if(i%2 ==0){
        for(int j =0; j<x; j++){
            up++;
            down = i-j;
        }
        
    }
    else{
        for(int y =0; y<x; y++){
            up= i-y;
            down ++;
        }
    }
    printf("%d/%d", up, down);
    
    return 0;
}