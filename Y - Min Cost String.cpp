#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<int> cost(26);
    for (int i = 0; i < 26; ++i) {
        cin >> cost[i];
    }

    int n = S.size();
    for (int i = 0; i < n; ++i) {
        if (S[i] != '?') continue;

        int j = i;
        while (j < n && S[j] == '?') j++;

        int block_len = j - i;
        char left = (i == 0) ? 0 : S[i - 1];
        char right = (j == n) ? 0 : S[j];

        int min_total_cost = INT_MAX;
        char best_char = 'a';

        for (char c = 'a'; c <= 'z'; ++c) {
            int current_cost = 0;
            if (left != 0 && left != '?')
                current_cost += abs(cost[left - 'a'] - cost[c - 'a']);
            if (right != 0 && right != '?')
                current_cost += abs(cost[right - 'a'] - cost[c - 'a']);

            if (current_cost < min_total_cost || (current_cost == min_total_cost && c < best_char)) {
                min_total_cost = current_cost;
                best_char = c;
            }
        }

        for (int k = i; k < j; ++k) {
            S[k] = best_char;
        }

        i = j - 1;
    }

    long long total_cost = 0;
    for (int i = 0; i < n - 1; ++i) {
        total_cost += abs(cost[S[i] - 'a'] - cost[S[i + 1] - 'a']);
    }

    cout << total_cost << endl;
    cout << S << endl;

    return 0;
}

