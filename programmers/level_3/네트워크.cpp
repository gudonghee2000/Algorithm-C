#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<bool> checker;



int dfs(int start, vector<vector<int>> computers) {
    stack<int> s;
    if (checker[start] == true)return 0;
    s.push(start);

    checker[start] = true;

    while (!s.empty()) {
        int a = s.top();
        s.pop();
        for (int i = 0; i < computers[a].size(); i++) {
            if (checker[i] != true && computers[a][i] == 1) {
                checker[i] = true;
                s.push(i);
            }
        }
    }
    return 1;

}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;


    for (int i = 0; i < computers.size(); i++) {
        checker.push_back(false);
    }

    for (int i = 0; i < computers.size(); i++) {
        answer += dfs(i, computers);
    }

    return answer;
}