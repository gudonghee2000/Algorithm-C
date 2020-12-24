#include <iostream>
#include <cstring>
using namespace std;

char a[50][50];

int main() {
    char str[2500];
    int N,M;
    char c[2] ={'W', 'B'};
    int result =-1;
    scanf("%d %d", &N,&M);
    for(int i=0; i<N; i++){
        cin>> str;
        for(int j=0; j<M; j++){
            a[i][j]=str[j];
        }
    }
    for(int checker=0; checker<2; checker++){
    for(int i=0; i<N-7;i++){
        for(int j=0; j<M-7; j++){
            int cnt =0;
            for(int xi=i; xi<i+8; xi++){
                for(int yj= j; yj<j+8; yj++){
                    if(a[xi][yj]!=c[(xi+yj+checker)%2]) cnt++;
                    }
                }
            if (result > cnt || result == -1)
            result = cnt;
            }
        }
    }
    
    
   
    
    printf("%d", result);
    return 0;
}