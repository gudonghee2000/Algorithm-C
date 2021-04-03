#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

void make_heap(vector<int> s, int right) {
    for (int i = 1; i < right; i++) {
        int c = i;
        while (c != 0) {
            int parent = c - 1 / 2;
            if (s[parent] > s[c]) {
                int tmp = s[c];
                s[c] = s[parent];
                s[parent] = tmp;
            }
            c = parent;
        }
    }
}

int solution(vector<int> s, int K) {
    int answer = 0;
    make_heap(s, s.size() - 1);

    while (s.front() < K && s.size() > 1) {
        int tmp = s.front();
        s.erase(s.begin());
        tmp += s.front() * 2;
        s.erase(s.begin());
        s.push_back(tmp);
        make_heap(s, s.size() - 1);
        answer++;
    }
    if (s.front() < K) {
        return -1;
    }
    return answer;
}

int main() {
    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(9);
    s.push_back(10);
    s.push_back(12);
    int k = 7;
    
    cout << solution(s, k);

    return 0;
}