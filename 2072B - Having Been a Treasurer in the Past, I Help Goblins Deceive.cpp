#include <iostream>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int d = 0, u = 0;
    for (char c : s) {
        if (c == '-') d++;
        else u++;
    }

    if (u == 0 || d < 2) {
        cout << "0\n";
        return;
    }

    ll d1 = d / 2, d2 = d - d1;
    ll result = d1 * u * d2;

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
