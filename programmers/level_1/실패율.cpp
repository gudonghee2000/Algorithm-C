#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, float> a, pair<int, float> b) {
    if (a.second > b.second) {
        return true;
    }
    else if (a.second == b.second) {
        if (a.first < b.first) {
            return true;
        }
    }
    return false;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, float>> ret;
    int tmp = 0;
    int person = stages.size(), cnt = 1;
    float pers;
    while (cnt <= N) {

        for (int i = 0; i < stages.size(); i++) {
            if (stages[i] == cnt) {
                tmp++;
            }
        }
        if (tmp == 0) {
            pers = 0;
        }
        else {
            pers = (float)tmp / (float)person;
        }
        ret.push_back(pair<int, float>(cnt, pers));
        person = person - tmp;
        tmp = 0;
        cnt++;

    }

    sort(ret.begin(), ret.end(), compare);
    for (int i = 0; i < ret.size(); i++) {
        answer.push_back(ret[i].first);
    }
    return answer;
}