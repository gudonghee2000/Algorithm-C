/*
   소수 찾기 문제이다. 그러나, 주어진 조건에서 최악의 경우를 고려하였을 때, n=1000000이 된다면
   O(N^2)는 답이 될수 없다. 왜냐하면 최악의 경우 1000000*1000000은 이미 1조번의 연산횟수가 필요하기 때문이다.
    즉 for문을 두번사용 할 수 없다.

    해결방법 으로 소수를 구하는 문제에서 연산횟수를 대폭적으로 줄여주는 에라토스테네스의 체 알고리즘을 사용해야한다.

    기본개념 : n이라는 숫자 이하의 소수를 모두 찾고 싶다면 1부터 n까지 쭉 나열한 다음에 2의배수, 3의 배수, 5의 배수 순서로 
               수를 지워가는 것이다.
    
    에라토스테네스의 체 알고리즘을 적용하여 코드를 구현하면 O(nloglogn) 이다.
 */


#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> koo;

    for (int i = 0; i <= n; i++) {
        koo.push_back(i);
    }

    for (int i = 2; i<= n; i++) {
        if (koo[i] == 0) {
            continue;
        }
        for (int j = i + i; j <= n; j += i) {
            koo[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (koo[i] != 0)answer++;
    }
    return answer;
}