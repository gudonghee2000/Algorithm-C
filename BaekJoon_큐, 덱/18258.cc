#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define MAX 2000000

int n;
int koo[MAX];
int f=0;
int rear=0;

bool empty(){
    return f == (rear%MAX);
}

void push(int x){
    koo[++rear] = x;    
}
int pop(){
    if(empty()){
        return -1;
    }
    int tmp = koo[++f];
    return tmp;
}
void size(){
    int cnt=0;
    for(int i=((f+1)%MAX); i<=(rear%MAX); i++){
        cnt++;
    }
    printf("%d\n", cnt);
}



void front(){
    int tmp =f +1;
    if(empty()){
        printf("-1\n");
    }
    else{
        printf("%d\n", koo[tmp]);
    }
}

void back(){
    if(empty()){
        printf("-1\n");
    }
    else{
        printf("%d\n", koo[rear]);
    }
}

int main() {
    scanf("%d", &n);
    char kkk[6];
    for(int i=0; i<n; i++){
        scanf("%s", kkk);
        if(!strcmp(kkk, "push")){
            int a;
            scanf("%d" , &a);
            push(a);
        }
        else if(!strcmp(kkk, "pop")){
            printf("%d\n", pop());
        }
        else if(!strcmp(kkk, "front")){
            front();
        }
        else if(!strcmp(kkk, "back")){
            back();
        }
        else if(!strcmp(kkk, "size")){
            size();
        }
        else if(!strcmp(kkk, "empty")){
            bool koo = empty();
            if(koo){
                printf("1\n");
                
            }
            else{
                printf("0\n");
            }
            
        }
        
        
        
    }
    return 0;
}