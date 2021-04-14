#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a + b > b + a)return true;
    return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> ret;

    for (int i = 0; i < numbers.size(); i++) {
        ret.push_back(to_string(numbers[i]));
    }

    sort(ret.begin(), ret.end(), compare);
    for (int i = 0; i < ret.size(); i++) {
        answer += ret[i];
    }
    if (answer[0] == '0') answer = '0';
    return answer;
}