#include <iostream>
#include<vector>
using namespace std;
int tmp = 0;
int ret = 9999999;
vector<bool> koo;
vector<bool> koo2;
void answer(vector<int> A, vector<int> B, int cnt) {
    if (cnt >= A.size()) {
        if (ret > tmp)ret = tmp;
        return;
    }

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (koo[i] == false && koo2[j] == false) {
                koo[i] = true;
                koo2[j] = true;
                tmp += A[i] * B[j];
                cnt++;
                answer(A, B, cnt);
                cnt--;
                tmp -= A[i] * B[j];
                koo[i] = false;
                koo2[j] = false;
            }
        }
    }
}

int solution(vector<int> A, vector<int> B)
{
    int r;
    for (int i = 0; i <= A.size(); i++) {
        koo.push_back(false);
        koo2.push_back(false);
    }
    answer(A, B, 0);
    r = ret;
    return r;
}