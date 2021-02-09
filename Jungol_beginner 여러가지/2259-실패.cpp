#include <iostream>

using namespace std;


int main() {
    int k;
    int coo[10];
    int length[10];
    cin >> k;

    for (int i = 0; i < 6; i++) {
        cin >> coo[i] >> length[i];
    }

    int max1_2 = -9999;


    int max3_4 = -9999;


    for (int i = 0; i < 6; i++) {
        if (coo[i] == 2 || coo[i] == 1) {
            if (max1_2 < length[i]) {
                max1_2 = length[i];
            }
        }
        else if (coo[i] == 3 || coo[i] == 4) {
            if (max3_4 < length[i]) {
                max3_4 = length[i];
            }
        }
    }

    int number;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (coo[i] == coo[j] && i != j) {
                number = coo[i];
                break;
            }
        }
    }
    int min;
    if (number == 1) {
        for (int i = 0; i < 6; i++) {
            if (coo[i] == 1 && coo[i + 1] == 3 && coo[i + 2] == 1) {
                min = length[i] * length[i + 1];
                break;
            }
            else {
                min = length[0] * length[5];
            }
        }
    }
    else if (number == 3) {
        for (int i = 0; i < 6; i++) {
            if (coo[i] == 3 && coo[i + 1] == 2 && coo[i + 2] == 3) {
                min = length[i] * length[i + 1];
                break;
            }
            else {
                min = length[0] * length[5];
            }
        }
    }
    else if (number == 2) {
        for (int i = 0; i < 6; i++) {
            if (coo[i] == 2 && coo[i + 1] == 4 && coo[i + 2] == 2) {
                min = length[i] * length[i + 1];
                break;
            }
            else {
                min = length[0] * length[5];
            }
        }
    }
    else if (number == 4) {
        for (int i = 0; i < 6; i++) {
            if (coo[i] == 4 && coo[i + 1] == 1 && coo[i + 2] == 4) {
                min = length[i] * length[i + 1];
                break;
            }
            else {
                min = length[0] * length[5];
            }
        }
    }


    int full = max1_2 * max3_4;
    int ret = (full - min) * k;
    cout << ret;

    return 0;
}