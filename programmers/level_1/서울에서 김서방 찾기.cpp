/*
 ���õ� �迭 seoul���� "kim" �� �ش��ϴ� ����� ��ġ���� ã�Ƴ��� �����̴�.
 ������ �����δ� to_string �Լ��� ���� int �ڷ����� string �ڷ������� �ٲ��־���Ѵٴ� ��
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
    answer = "�輭���� " + koo + "�� �ִ�";
    return answer;
}