#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int solution(string s) {
    int len = s.size();
    int answer = len;

    for (int i = 1; i <= s.size() / 2; i++) {

        string new_answer = "";
        pair<string, int> koo;
        koo = make_pair(s.substr(0, i), 1);

        for (int j = i; j <= s.size(); j += i) {
            if (koo.first == s.substr(j, i)) {
                koo.second++;
            }
            else {
                if (koo.second > 1) {
                    new_answer += to_string(koo.second) + koo.first;
                    koo.second = 1;
                    koo.first = s.substr(j, i);
                }
                else {
                    new_answer += koo.first;
                    koo.second = 1;
                    koo.first = s.substr(j, i);
                }
            }
        }

        new_answer += s.substr((len / i) * i);

        if (answer > new_answer.size()) {
            answer = new_answer.size();
        }
    }


    return answer;
}