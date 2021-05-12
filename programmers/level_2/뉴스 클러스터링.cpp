#include <string>
#include <cctype>
#include <vector>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> first;
    vector<string> second;

    for (int i = 0; i < str1.size() - 1; i++) {
        bool checking = true;
        for (int j = i; j < i + 2; j++) {
            if (isalpha(str1[j]) == 0) {
                checking = false;
                break;
            }
        }
        if (checking == true) {
            string tmp = str1.substr(i, 2);
            for (int m = 0; m < tmp.size(); m++) {
                tmp[m] = toupper(tmp[m]);
            }
            first.push_back(tmp);
        }
    }

    for (int i = 0; i < str2.size() - 1; i++) {
        bool checking_sec = true;
        for (int j = i; j < i + 2; j++) {
            if (isalpha(str2[j]) == 0) {
                checking_sec = false;
                break;
            }
        }
        if (checking_sec == true) {
            string tmp2 = str2.substr(i, 2);
            for (int m = 0; m < tmp2.size(); m++) {
                tmp2[m] = toupper(tmp2[m]);
            }
            second.push_back(tmp2);
        }
    }

    int high = 0;
    int low = 0;

    for (int i = 0; i < first.size(); i++) {
        int size = second.size();
        for (int j = 0; j < size; j++) {
            if (first[i] == second[j]) {
                second.erase(second.begin() + j);
                high++;
                break;
            }
        }
    }

    if (first.empty() && second.empty()) {
        return answer = 65536;
    }

    low = first.size() + second.size();

    double k = (double)high / (double)low;
    k = k * 65536;
    answer = k;

    return answer;
}

