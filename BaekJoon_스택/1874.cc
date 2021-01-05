#include <iostream>
#include <vector>
using namespace std;

class stack{
    int top;
    int koo[100000];
    public:
    stack(){top=-1;}
    void push(int x){
        koo[++top] = x;
    }
    int pop(){
        int tmp = koo[top--];
        return tmp;
    }
    bool isempty(){
        return top==-1;
    }
    int t(){
        return koo[top];
    }
    
};

int main() {
    stack koo1;
    int n;
    int a[100000];
    vector<char> d;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int cnt=0;
    int it= a[cnt];
    for(int i=1; i<=n; i++){
        koo1.push(i);
        d.push_back('+');
        while(!koo1.isempty()){
            if(it !=koo1.t())break;
            else{
                koo1.pop();
                d.push_back('-');
                it = a[++cnt];
            }
            
        }
    }
    if(koo1.isempty()){
        for(int i=0; i<d.size(); ++i){
            printf("%c\n", d[i]);
        }
    }
    else{
        printf("NO");
    }
    
        
        
    
    
    
    return 0;
}