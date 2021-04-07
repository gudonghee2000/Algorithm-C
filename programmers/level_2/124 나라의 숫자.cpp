#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    while (n != 0) {
        int a = n % 3;
        if (a == 1) answer += "1";
        else if (a == 2) answer += "2";
        else if (a == 0) answer += "4";
        n = n / 3;
        if (a == 0) n = n - 1;
    }
    string ret;
    for (int i = answer.length() - 1; i >= 0; i--) {
        ret += answer[i];
    }
    answer = ret;
    return answer;
}