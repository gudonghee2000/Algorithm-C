#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;



string solution(string p) {
    if (p.empty())return p;
    stack<char> u;
    string fir;
    string sec;
    int ttt = p.size();
    int right = 0, left = 0;
    for (int i = 0; i < p.length(); i++) {
        if (p[i] == '(')right++;
        else if (p[i] == ')')left++;
        if (left == right) {
            for (int j = 0; j <= i; j++) {
                fir += p[j];
            }
            for (int m = i + 1; m < p.length(); m++) {
                sec += p[m];
            }
            break;
        }

    }
    bool checker = true;
    for (int i = 0; i < fir.length(); i++) {
        if (fir[i] == '(')u.push(fir[i]);
        else if (fir[i] == ')') {
            if (u.empty()) {
                checker = false;
                break;
            }
            else {
                u.pop();
            }
        }
    }


    string yyy;
    if (fir.size() >= 4) {
        for (int i = 1; i < fir.length() - 1; i++) {
            if (fir[i] == '(') {
                yyy += ')';
            }
            else {
                yyy += '(';
            }
        }
    }


    if (checker) {
        return fir + solution(sec);
    }
    else {
        return "(" + solution(sec) + ")" + yyy;
    }
}