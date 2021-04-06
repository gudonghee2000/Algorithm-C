#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

vector<string> tmp;
string t;

bool compare(pair<int, string> a, pair<int, string> b) {
    if (a.first > b.first)return true;
    return false;
}

void make_pairs(string koo, int cnt, int c, int kot) {
    if (cnt == kot) {
        tmp.push_back(t);

        return;
    }
    for (int i = c; i < koo.length(); i++) {
        t += koo[i];
        cnt++;
        c = i + 1;
        make_pairs(koo, cnt, c, kot);
        t = t.substr(0, cnt - 1);
        cnt--;
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    for (int j = 0; j < course.size(); j++) {
        int kot = course[j];
        for (int i = 0; i < orders.size(); i++) {
            sort(orders[i].begin(), orders[i].end());
            string koo = orders[i];
            make_pairs(koo, 0, 0, kot);
        }
        sort(tmp.begin(), tmp.end());

        stack<string> s;
        vector<pair<int, string>> koo;

        for (int i = 0; i < tmp.size(); i++) {
            s.push(tmp[i]);
            string ttt = tmp[i];
            for (int j = i + 1; j < tmp.size(); j++) {
                if (s.top() != tmp[j]) {
                    i = j - 1;
                    break;
                }
                s.push(tmp[j]);
            }
            int cnt = 0;
            while (!s.empty()) {
                s.pop();
                cnt++;
            }
            koo.push_back(make_pair(cnt, ttt));
        }
        sort(koo.begin(), koo.end(), compare);
        for (int i = 0; i < koo.size(); i++) {
            if (koo[i].first != koo[i + 1].first && koo[i].first != 1) {
                answer.push_back(koo[i].second);
                break;
            }
            if (koo[i].first != 1) {
                answer.push_back(koo[i].second);
            }
        }

        tmp.clear();
    }
    sort(answer.begin(), answer.end());
    return answer;
}