#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;


int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    queue<int> q;
    q.push(-1);

    for (int i = 0; i < skill_trees.size(); i++) {
        bool chk = true;
        string tmp = skill_trees[i];
        for (int t = 0; t < tmp.size(); t++) {
            for (int m = 0; m < skill.size(); m++) {
                if (tmp[t] == skill[m]) {
                    if (q.front() + 1 == m) {
                        q.pop();
                        q.push(m);
                        break;
                    }
                    else {
                        chk = false;
                        break;
                    }
                }
            }
            if (chk == false)break;
        }
        if (chk == true) {
            cout << tmp;
        }
    }
    return answer;
}

int main() {
    string skill = "CBD";
    vector<string> s;
    s.push_back("BACDE");
    s.push_back("CBADF");
    s.push_back("AECB");
    s.push_back("BDA");
    solution(skill, s);


    return 0;
}