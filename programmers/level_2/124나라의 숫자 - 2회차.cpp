#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> tmp;
    while (n > 0) {
        if (n % 3 == 1) {
            tmp.push_back("1");
        }
        else if (n % 3 == 2) {
            tmp.push_back("2");
        }
        else if (n % 3 == 0) {
            tmp.push_back("4");
            n = n - 1;
        }
        n = n / 3;
    }

    for (int i = tmp.size() - 1; i >= 0; i--) {
        answer += tmp[i];
    }

    return answer;
}