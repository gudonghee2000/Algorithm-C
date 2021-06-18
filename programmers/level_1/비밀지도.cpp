#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < arr1.size(); i++) arr1[i] = arr1[i] | arr2[i];

    for (int i = 0; i < arr1.size(); i++) {
        string line = "";
        while (arr1[i] > 0) {
            int tmp = arr1[i] % 2;
            if (tmp == 1) {
                line += "#";
            }
            else {
                line += " ";
            }
            arr1[i] = arr1[i] / 2;
        }
        string tmp_line = "";
        if (line.size() < n) {
            for (int i = 0; i < n - line.size(); i++) {
                tmp_line += " ";
            }
        }
        line += tmp_line;
        reverse(line.begin(), line.end());
        answer.push_back(line);
    }

    return answer;
}