#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mx = mx + x;
        answer.push_back(mx);
    }

    return answer;
}