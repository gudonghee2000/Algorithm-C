#include <string>
#include <vector>
#include <cstdlib>

using namespace std;


int co;

void DFS(int n, vector<string> data, int cnt, char charicter[8], bool checker[8], string answer) {
    if (cnt >= 8) {
        bool checking = true;
        for (int i = 0; i < data.size(); i++) {
            char a = data[i][0];
            char b = data[i][2];
            int a_c;
            int b_c;
            for (int j = 0; j < answer.size(); j++) {
                if (answer[j] == a) {
                    a_c = j;
                }
                else if (answer[j] == b) {
                    b_c = j;
                }
            }
            if (data[i][3] == '=') {
                if (abs(a_c - b_c) != (data[i][4] - '0') + 1) {
                    checking = false;
                    break;
                }
            }
            else if (data[i][3] == '<') {
                if (abs(a_c - b_c) > (data[i][4] - '0')) {
                    checking = false;
                    break;
                }
            }
            else if (data[i][3] == '>') {
                if (abs(a_c - b_c) <= (data[i][4] - '0') + 1) {
                    checking = false;
                    break;
                }
            }
        }
        if (checking == true)co++;
        return;
    }
    for (int i = 0; i < 8; i++) {
        if (checker[i] == false) {
            answer += charicter[i];
            checker[i] = true;
            DFS(n, data, cnt + 1, charicter, checker, answer);
            answer.erase(answer.size() - 1);
            checker[i] = false;
        }
    }

}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data) {
    int a = 0;
    char charicter[8] = { 'A','C','F','J','M','N','R','T' };
    bool checker[8] = { false, false, false, false, false, false, false, false };
    string answer = "";
    co = 0;

    DFS(n, data, 0, charicter, checker, answer);

    a = co;

    return a;
}