#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    while (1) {
        if (progresses.empty())break;
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] = progresses[i] + speeds[i];
        }
        int tmp = 0;
        while (1) {
            if (progresses[0] >= 100) {
                tmp++;
                progresses.erase(progresses.begin());
                speeds.erase(speeds.begin());
            }
            if (progresses.empty())break;
            if (progresses[0] < 100) {
                break;
            }
        }
        if (tmp > 0) {
            answer.push_back(tmp);
        }
    }

    return answer;
}