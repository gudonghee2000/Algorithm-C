#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int tmp = arr[0];
    int index = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (tmp > arr[i]) {
            index = i;
            tmp = arr[i];
        }
    }
    arr.erase(arr.begin() + index);
    answer = arr;

    if (answer.empty()) answer.push_back(-1);


    return answer;
}