#include <string>
#include <vector>
#include <queue>
#include <algorithm>



using namespace std;

int solution(vector<int> p, int location) {
    int answer = 0;
    vector<int> loc;
    int tmp1, tmp2 = -1;
    for (int i = 0; i < p.size(); i++) {
        loc.push_back(i);
    }
    bool checker = false;
    while (location != tmp2) {
        tmp1 = p[0];
        tmp2 = loc[0];
        for (int i = 1; i < p.size(); i++) {
            if (tmp1 < p[i]) {
                checker = true;
                break;
            }
        }
        if (checker == true) {
            p.erase(p.begin());
            loc.erase(loc.begin());
            p.push_back(tmp1);
            loc.push_back(tmp2);
            tmp2 = -1;
        }
        else {
            p.erase(p.begin());
            loc.erase(loc.begin());
            answer++;
        }
    }
    return answer;
}