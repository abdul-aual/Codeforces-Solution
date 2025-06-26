#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> score;
    string team;
    for (int i = 0; i < n; ++i) {
        cin >> team;
        score[team]++;
    }
    string winner;
    int maxGoals = 0;
    for (auto &entry : score) {
        if (entry.second > maxGoals) {
            maxGoals = entry.second;
            winner = entry.first;
        }
    }
    cout << winner << endl;
    return 0;
}

