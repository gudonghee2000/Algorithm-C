#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    char tmp;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        tmp = s[i];
        cnt = i;
        for (int j = 0; j < s.length(); j++) {
            if (tmp < s[j]) {
                tmp = s[j];
                cnt = j;
            }
        }
        s[cnt] = '0';
        answer += tmp;
        cnt = 0;
    }

    return answer;
}