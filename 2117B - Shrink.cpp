#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string out = "1";
        for (int i = n; i >= 2; i--) {
            out += ' ';
            out += to_string(i);
        }
        cout << out << "\n";
    }
    return 0;
}