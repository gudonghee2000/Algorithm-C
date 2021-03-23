/*
 제시된 배열 seoul에서 "kim" 에 해당하는 요소의 위치값을 찾아내는 문제이다.
 주의할 점으로는 to_string 함수를 통해 int 자료형을 string 자료형으로 바꿔주어야한다는 것
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int x;
    string koo;
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            x = i;
            break;
        }
    }
    koo = to_string(x);
    answer = "김서방은 " + koo + "에 있다";
    return answer;
}