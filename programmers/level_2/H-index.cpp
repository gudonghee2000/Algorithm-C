#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int high = 0, low = 0;
    int h = -1;
    while (low <= high) {
        h++;
        low = 0;
        high = 0;
        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] >= h) {
                high++;
            }
            if (citations[i] < h) {
                low++;
            }
        }
        if (high >= h && low == citations.size() - high)
            answer = h;
    }
    return answer;
}