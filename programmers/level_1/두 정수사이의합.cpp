#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int fir, sec;
    if (a < b) {
        sec = b;
        fir = a;
    }
    else {
        sec = a;
        fir = b;
    }
    answer += fir;
    for (int i = fir + 1; i < sec; i++) {
        answer += i;
    }
    answer += sec;
    if (fir == sec) answer -= fir;
    return answer;
}