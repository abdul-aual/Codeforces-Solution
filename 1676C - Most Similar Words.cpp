#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        int min_diff = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int diff = 0;
                for (int k = 0; k < m; ++k) {
                    diff += abs(s[i][k] - s[j][k]);
                }
                if (diff < min_diff) min_diff = diff;
            }
        }
        cout << min_diff << '\n';
    }
    return 0;
}

