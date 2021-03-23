#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    int result = a*b*c;
    int *m = new int[10000];
    for(int i=0; i<10; i++){
        m[i]=0;
    }
    for(int i=0; i<10; i++){
        int kd = result%10;
        m[kd] += 1;
        result=result/10;
        if(result <=0)break;
    }
    for(int i =0; i<10; i++){
        printf("%d\n", m[i]);
    }

    return 0;
}