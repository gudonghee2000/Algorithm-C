#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> koo;

    int check = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i == s.size() - 1) {
            string tmp2 = s.substr(check, i - check + 1);
            koo.push_back(tmp2);
        }
        if (s[i] == ' ') {
            string tmp = s.substr(check, i - check);
            koo.push_back(tmp);
            check = i + 1;
        }
    }
    vector<int> real;
    for (int i = 0; i < koo.size(); i++) {
        real.push_back(stoi(koo[i]));
    }
    int max = real[0];
    int min = real[0];

    for (int i = 1; i < real.size(); i++) {
        if (max < real[i])max = real[i];
        if (min > real[i])min = real[i];
    }

    answer = to_string(min) + " " + to_string(max);

    return answer;
}