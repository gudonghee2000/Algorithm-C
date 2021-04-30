#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";

    int checker = 0;
    while (k > 0) {
        k--;
        for (int i = 0; i < number.size() - 1; i++) {
            if (number[i] - '0' < number[i + 1] - '0') {
                number.erase(number.begin() + i);
                checker = 1;
                break;
            }
        }
        if (checker == 0) {
            number.erase(number.begin() + number.size() - 1);
        }
    }
    answer = number;

    return answer;
}