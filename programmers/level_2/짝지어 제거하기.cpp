#include <iostream>
#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int cnt = 0;
    stack<char> bottle;

    for (int i = 0; i < s.size(); i++) {
        if (bottle.empty() || bottle.top() != s[i]) {
            bottle.push(s[i]);
        }
        else {
            bottle.pop();
        }
    }

    if (bottle.empty())answer = 1;



    return answer;
}