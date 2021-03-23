#include <iostream>
# define MAX 101;
using namespace std;


int main() {
    int n;
    char str;
    int queue[10001];
    int front = 0;
    int rear = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == 'i') {
            int tmp;
            cin >> tmp;
            queue[++rear] = tmp;
        }
        else if (str == 'o') {
            if (front != rear) {
                int koo = queue[++front];
                cout << koo << "\n";
            }
            else {
                cout << "empty" << "\n";
            }
         }
        else if (str == 'c') {
            int cnt = 0;
            for (int j = front + 1; j <= rear; j++) {
                cnt += 1;
            }
            cout << cnt << "\n";
        }
    }


    return 0;
}