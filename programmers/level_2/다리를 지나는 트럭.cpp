#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weight) {
    int answer = 0;
    int now_weight = 0;
    int count = 0;
    vector<pair<int, int>> trucks;

    trucks.push_back(make_pair(truck_weight[0], 0));
    now_weight += truck_weight[0];
    truck_weight.erase(truck_weight.begin());

    while (1) {
        if (trucks.empty() && truck_weight.empty())break;

        count++;
        for (int i = 0; i < trucks.size(); i++) trucks[i].second++;


        if (trucks[0].second >= bridge_length) {
            now_weight -= trucks[0].first;
            trucks.erase(trucks.begin());
        }

        if (weight >= now_weight + truck_weight[0] && !truck_weight.empty()) {
            trucks.push_back(make_pair(truck_weight[0], 0));
            now_weight += truck_weight[0];
            truck_weight.erase(truck_weight.begin());
        }
    }
    answer = count + 1;
    return answer;
}