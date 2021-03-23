/* 입력된 문자열 s의 조건들을 파악하는 문제입니다.
 제시된 조건
 1. 문자열의 길이가 4 또는 6일 것 - length() 혹은 size() 함수를 사용해 조건에 비교해준다.
 2. 문자열의 각문자요소가 숫자일 것 - 아스키코드표상 숫자를 나타내는 문자는 48~57까지이다.
                                 그렇기 때문에, s[]의 요소들을 비교해준다.
*/


#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int tmp;

    if (s.length() == 4 || s.length() == 6) {
        answer = true;
    }

    for (int i = 0; i < s.length(); i++) {
        if (48 <= s[i] && s[i] <= 57) {
            continue;
        }
        answer = false;
        break;
    }

    return answer;
}