#include <string>
#include <vector>
#include <string.h>
using namespace std;

int tmp = -1;

void checkers(string number, int k, int cnt, int ret, int lit) {
    if (k == cnt) {
        if (tmp < ret) {
            tmp = ret;
        }
        return;
    }

    for (int i = lit; i < number.length(); i++) {
        lit = i + 1;
        ret = ret * 10 + number[i] - '0';
        checkers(number, k, cnt + 1, ret, lit);
        ret = ret / 10;
    }
}
string solution(string number, int k) {
    int cnt = 0;
    int ret = 0;
    int kk = number.length() - k;
    checkers(number, kk, cnt, ret, 0);
    string answer = to_string(tmp);
    return answer;
}