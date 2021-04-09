#include <string>
#include <vector>
#include <string.h>
using namespace std;

string solution(string s) {
    s += " ";
    string answer = "";
    vector<string> tmp;
    int coor = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isspace(s[i]) != 0) {
            for (int j = coor; j < i; j++) {
                answer += s[j];
            }
            tmp.push_back(answer);
            answer = "";
            coor = i + 1;
        }
    }

    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i][0] >= 'a' && tmp[i][0] <= 'z') {
            tmp[i][0] -= 32;
        }
        for (int j = 1; j < tmp[i].size(); j++) {
            if (tmp[i][j] >= 'A' && tmp[i][j] <= 'Z') {
                tmp[i][j] += 32;
            }
        }
    }
    answer = "";
    for (int i = 0; i < tmp.size() - 1; i++) {
        answer += tmp[i] + " ";
    }
    answer += tmp[tmp.size() - 1];

    return answer;
}