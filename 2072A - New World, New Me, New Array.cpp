#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    int max_possible = n * p;
    int min_possible = n * (-p);


    if (k < min_possible || k > max_possible) {
        cout << -1 << "\n";
        return;
    }

    int min_operations = abs(k) / p + (abs(k) % p != 0);
    cout << min_operations << "\n";
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
