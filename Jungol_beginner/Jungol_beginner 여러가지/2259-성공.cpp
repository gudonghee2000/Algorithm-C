#include <iostream>

using namespace std;

int main() {
    int coo[10];
    int length[10];
    int k;
    int width = 0;
    int height = 0;
    int size[10];
    int ret = 0;
    cin >> k;
    for (int i = 0; i < 6; i++) {
        cin >> coo[i] >> length[i];
        if (coo[i] == 1 || coo[i] == 2) {
            if (length[i] > width) {
                width = length[i];
            }
        }
        else if (coo[i] == 3 || coo[i] == 4) {
            if (length[i] > height) {
                height = length[i];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        size[i] = length[i] * length[i + 1];
        ret += size[i];
    }
    size[6] = length[5] * length[0];
    ret += size[6];
    ret -= width * height * 2;
    cout << ret * k;



    return 0;
}