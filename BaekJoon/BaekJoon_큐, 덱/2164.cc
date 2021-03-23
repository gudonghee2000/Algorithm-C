#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define MAX 2000000

class queue{
    int front;
    int rear;
    int a[MAX];
    public:
    queue(){front = rear = 0;}
    void push(int m){
        a[++rear] = m;
    }
    bool isempty(){
        return front == rear%MAX;
    }
    int pop(){
        int tmp = a[++front];
        return tmp;
    }
    
    bool checker(queue kkk){
        if(kkk.size()==1){
            return true;
        }
        else return false;
    }
    int size(){
        int cnt=0;
        for(int i=front+1; i<=rear; i++){
            cnt++;
        }
        return cnt;
    }
    
    
    
};

int main() {
    int n;
    queue koo;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        koo.push(i); 
    }
    
    
    while(!koo.checker(koo)){
        koo.pop();
        int tmp = koo.pop();
        koo.push(tmp);
        
    }
    
    printf("%d", koo.pop());
    return 0;
}