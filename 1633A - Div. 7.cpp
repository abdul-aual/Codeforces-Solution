#include <iostream>
#include <string>
#include <climits>
using namespace std;

int countDiff(const string &a, const string &b) {
    int diff = 0;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) diff++;
    }
    return diff;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s = to_string(n);
        int len = (int)s.size();


        if (n % 7 == 0) {
            cout << n << "\n";
            continue;
        }

        int minChanges = INT_MAX;
        string answer;

        int start = (len == 2) ? 10 : 100;
        int end = (len == 2) ? 99 : 999;

        for (int x = start; x <= end; x++) {
            if (x % 7 == 0) {
                string candidate = to_string(x);

                int diff = countDiff(s, candidate);
                if (diff < minChanges) {
                    minChanges = diff;
                    answer = candidate;
                }
            }
        }

        cout << answer << "\n";
    }

    return 0;
}

