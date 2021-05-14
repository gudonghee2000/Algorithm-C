#include <string>
#include <vector>

using namespace std;

int co = 0;

void make(vector<int> numbers, int target, int ret, int cnt) {
    if (cnt == numbers.size()) {
        if (ret == target) {
            co++;
        }
        return;
    }

    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            ret += numbers[cnt];
            make(numbers, target, ret, cnt + 1);
            ret -= numbers[cnt];
        }
        else if (i == 1) {
            ret += -numbers[cnt];
            make(numbers, target, ret, cnt + 1);
            ret -= -numbers[cnt];
        }
    }

}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    make(numbers, target, 0, 0);
    answer = co;
    return answer;
}