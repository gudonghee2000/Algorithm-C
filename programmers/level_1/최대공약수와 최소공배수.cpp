#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    int num = n > m ? m : n;
    int num2 = n > m ? n : m;

    while (1) {
        if (n % num == 0 && m % num == 0) {
            break;
        }
        num--;
    }

    while (1) {
        if (num2 % n == 0 && num2 % m == 0) break;
        num2++;
    }

    answer.push_back(num);
    answer.push_back(num2);

    return answer;
}