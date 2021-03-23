/* �Էµ� ���ڿ� s�� ���ǵ��� �ľ��ϴ� �����Դϴ�.
 ���õ� ����
 1. ���ڿ��� ���̰� 4 �Ǵ� 6�� �� - length() Ȥ�� size() �Լ��� ����� ���ǿ� �����ش�.
 2. ���ڿ��� �����ڿ�Ұ� ������ �� - �ƽ�Ű�ڵ�ǥ�� ���ڸ� ��Ÿ���� ���ڴ� 48~57�����̴�.
                                 �׷��� ������, s[]�� ��ҵ��� �����ش�.
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