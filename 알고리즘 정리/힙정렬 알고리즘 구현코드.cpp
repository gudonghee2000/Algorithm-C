#include <iostream>

using namespace std;

void heap(int* data, int num) {
    for (int i = 1; i < num; i++) {
        int child = i;
        while (child > 0) {
            int root = (child - 1) / 2;
            if (data[root] < data[child]) {
                int temp = data[root];
                data[root] = data[child];
                data[child] = temp;
            }
            child = root;
        }
    }
}

int main() {
    int num = 9;
    int data[9] = { 1,5,9,7,4,5,8,6,7 };

    heap(data, num);

    for (int i = num - 1; i >= 0; i--) {
        int temp = data[i];
        data[i] = data[0];
        data[0] = temp;
        heap(data, i);
    }

    for (int i = 0; i < num; i++) {
        cout << data[i] << " ";
    }

    return 0;
}