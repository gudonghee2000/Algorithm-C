#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int tmp_x = x;
    int chk_number = 0;

    while (tmp_x > 0) {
        int tmp = tmp_x % 10;
        chk_number += tmp;
        tmp_x = tmp_x / 10;
    }

    if (x % chk_number == 0) answer = true;

    return answer;
}