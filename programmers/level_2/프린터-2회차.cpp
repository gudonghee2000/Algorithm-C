#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<pair<int, int>> my_doc;

    for (int i = 0; i < priorities.size(); i++) {
        my_doc.push_back(make_pair(priorities[i], i));
    }

    while (1) {
        int tmp = my_doc.begin()->first;
        int lo = my_doc.begin()->second;
        bool checker = false;

        for (int i = 1; i < my_doc.size(); i++) {
            if (tmp < my_doc[i].first) {
                my_doc.erase(my_doc.begin());
                my_doc.push_back(make_pair(tmp, lo));
                checker = true;
                break;
            }
        }
        if (checker == false) {
            my_doc.erase(my_doc.begin());
            answer++;
            if (lo == location) {
                break;
            }
        }
    }



    return answer;
}