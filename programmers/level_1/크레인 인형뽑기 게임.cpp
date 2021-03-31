#include <string>
#include <vector>

using namespace std;


int solution(vector<vector <int>> board, vector<int> moves) {
    vector<int> buckets;
    int tmp;
    int answer = 0;

    for (int i = 0; i < moves.size(); i++) {
        int checker = moves[i] - 1;
        for (int j = 0; j < board.size(); j++) {
            if (board[j][checker] != 0) {
                if (!buckets.empty()) {
                    if (buckets[buckets.size() - 1] == board[j][checker]) {
                        buckets.pop_back();
                        answer += 2;
                    }
                    else {
                        buckets.push_back(board[j][checker]);
                    }
                }
                else {
                    buckets.push_back(board[j][checker]);
                }
                board[j][checker] = 0;
                break;
            }
        }
    }
    return answer;
}