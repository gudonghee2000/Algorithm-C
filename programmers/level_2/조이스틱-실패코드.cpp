#include <string>
#include <vector>

using namespace std;
int answer = 0;
string check(string name, string sample, int coordinate) {
    if (name[coordinate] <= 77) {
        while (sample[coordinate] != name[coordinate]) {
            sample[coordinate] += 1;
            answer++;
        }
    }
    else if (78 <= name[coordinate]) {
        sample[coordinate] = 91;
        while (sample[coordinate] != name[coordinate]) {
            sample[coordinate] -= 1;
            answer++;
        }
    }
    return sample;
}

int make_coor1(string name, int coordinate) {
    for (int i = 0; i < name.size(); i++) {
        if (name[i] != 'A') {
            coordinate = i;
            break;
        }
    }
    answer += coordinate;
    return coordinate;
}

int make_coor2(string name, int coordinate) {
    for (int i = name.size() - 1; i >= 0; i++) {
        if (name[i] != 'A') {
            coordinate = i;
            break;
        }
    }
    answer += name.size() - coordinate;
    return coordinate;
}



int solution(string name) {
    int coordinate = 0;
    string sample;
    bool direction = true;
    int s1, s2;

    for (int i = 0; i < name.size(); i++) {
        sample += 'A';
    }

    for (int i = 0; i < name.size(); i++) {
        if (name[i] != 'A') {
            s1 = i;
            break;
        }
    }
    for (int j = name.size() - 1; j >= 0; j--) {
        if (name[j] != 'A') {
            s2 = j;
            break;
        }
    }
    if (s1 >= name.size() - s2) {
        direction = false;
    }

    while (sample != name) {
        sample = check(name, sample, coordinate);
        if (direction == true) {
            coordinate = make_coor1(name, coordinate);
        }
        else if (direction == false) {
            coordinate = make_coor2(name, coordinate);
        }
    }
    int ret;
    ret = answer;
    return ret;
}