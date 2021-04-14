#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fake = n;
    int m;
    int m_one = 0;
    while (fake > 0) {
        if (fake % 2 == 1) {
            m_one++;
        }
        m += fake % 2;
        fake = fake / 2;
    }
    int real_one = 0;

    while (m_one != real_one) {
        int tt;
        real_one = 0;
        n++;
        fake = n;
        while (fake > 0) {
            if (fake % 2 == 1) {
                real_one++;
            }
            fake = fake / 2;
        }
    }
    answer = n;

    return answer;
}