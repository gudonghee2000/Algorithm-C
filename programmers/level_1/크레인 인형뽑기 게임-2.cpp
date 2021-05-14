#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> bucket;

    for (int i = 0; i < moves.size(); i++) {
        int position = moves[i] - 1;

        for (int j = 0; j < board.size(); j++) {
            if (board[j][position] != 0) {
                if (bucket.empty()) {
                    bucket.push_back(board[j][position]);
                    board[j][position] = 0;
                }
                else if (bucket[bucket.size() - 1] == board[j][position]) {
                    bucket.erase(bucket.begin() + bucket.size() - 1);
                    answer += 2;
                    board[j][position] = 0;
                }
                else {
                    bucket.push_back(board[j][position]);
                    board[j][position] = 0;
                }
                break;
            }
        }
    }


    return answer;
}