#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    string m;
    while (k > 0) {
        k--;
        int c;
        for (int j = 0; j < number.length() - 1; j++) {
            if (number[j] < number[j + 1]) {
                c = j;
                break;
            }
            else {
                c = j + 1;
            }
        }

        for (int i = 0; i < number.length(); i++) {
            if (c == i)continue;
            m += number[i];
        }
        number = m;
        m = "";
    }


    answer = number;

    return answer;
}