#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string dart) {
    vector<char> sdt;
    vector<char> bounus;

    for (int i = 0; i < dart.length(); i++) {
        if (dart[i] == 'S' || dart[i] == 'D' || dart[i] == 'T') {
            sdt.push_back(dart[i]);
            dart[i] = 'x';
            if (dart[i + 1] == '*' || dart[i + 1] == '#') {
                bounus.push_back(dart[i + 1]);
                dart[i + 1] = 'x';
            }
            else {
                bounus.push_back('n');
            }
        }
    }
    vector<int> tmp;
    for (int i = 0; i < dart.length(); i++) {
        if (dart[i] == '1' && dart[i + 1] == '0') {
            tmp.push_back(10);
            i = i + 1;
        }
        else if (dart[i] != 'x') {
            tmp.push_back(dart[i] - '0');
        }
    }
    for (int i = 0; i < 3; i++) {
        if (sdt[i] == 'S') {
            tmp[i] = tmp[i];
        }
        else if (sdt[i] == 'D') {
            tmp[i] = tmp[i] * tmp[i];
        }
        else if (sdt[i] == 'T') {
            tmp[i] = tmp[i] * tmp[i] * tmp[i];
        }
    }

    if (bounus[0] == '*') {
        tmp[0] = tmp[0] * 2;
    }
    else if (bounus[0] == '#') {
        tmp[0] = -tmp[0];
    }

    if (bounus[1] == '*') {
        tmp[1] = tmp[1] * 2;
        tmp[0] = tmp[0] * 2;
    }
    else if (bounus[1] == '#') {
        tmp[1] = -tmp[1];

    }

    if (bounus[2] == '*') {
        tmp[2] = tmp[2] * 2;
        tmp[1] = tmp[1] * 2;
    }
    else if (bounus[2] == '#') {
        tmp[2] = -tmp[2];

    }


    int answer = tmp[0] + tmp[1] + tmp[2];

    return answer;
}