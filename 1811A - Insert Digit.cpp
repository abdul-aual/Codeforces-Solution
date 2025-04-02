#include <iostream>
using namespace std;

void solve() {
    int n, d;
    string s;
    cin >> n >> d >> s;

    bool inserted = false;
    for (int i = 0; i < n; i++) {
        if ((s[i] - '0') < d) {
            cout << s.substr(0, i) + to_string(d) + s.substr(i) << endl;
            inserted = true;
            return;
        }
    }

    if (!inserted) {
        cout << s + to_string(d) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

