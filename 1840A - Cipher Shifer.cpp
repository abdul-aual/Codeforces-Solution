#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, res = "";
        cin >> n >> s;
        for (int i = 0; i < n; ) {
            char c = s[i];
            int j = i + 1;
            while (j < n && s[j] != c) j++;
            res += c;
            i = j + 1;
        }
        cout << res << "\n";
    }
}

int main() {
    solve();
    return 0;
}

