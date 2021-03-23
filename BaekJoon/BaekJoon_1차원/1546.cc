#include <iostream>

using namespace std;
int n;
int main() {
    scanf("%d\n", &n);
    float score[n];
    for(int i=0; i<n; i++){
        scanf("%f", score+i);
    }
    float max = score[0];
    for(int i=1; i<n; i++){
        if(max<score[i]){
            max = score[i];
        }
    }
    float result;
    for(int i=0; i<n; i++){
        score[i] = (score[i]/max)*100;
        result += score[i];
    }
    
    float answer =result/n;
    float k = (float)answer;
    printf("%f", k);
    return 0;
}