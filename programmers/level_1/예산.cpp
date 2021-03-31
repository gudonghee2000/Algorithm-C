#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int cnt = 0;
    int sum = 0;
    sort(d.begin(), d.end());

    while (budget > sum) {
        sum = sum + d[cnt];
        cnt++;
        answer++;
        if (sum >= budget) {
            break;
        }
        if (cnt == d.size()) {
            break;
        }
    }
    if (sum > budget) {
        answer -= 1;
    }

    return answer;
}