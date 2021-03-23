#include <iostream>

using namespace std;


int main() {
    int n;
    int a;
    int result = 0;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        for(int j=2; j<=a; j++){
            if(a ==j){
            result++;
        }
            if(a%j==0){
                break;
            }
        
    }
    }
    printf("%d",result);
    return 0;
}