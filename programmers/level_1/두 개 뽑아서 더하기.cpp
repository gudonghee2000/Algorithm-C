#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> checker(201, false);

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int tmp = numbers[i] + numbers[j];
            if (!checker[tmp]) {
                checker[tmp] = true;
                answer.push_back(tmp);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}