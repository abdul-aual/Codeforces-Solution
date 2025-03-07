#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int maxCoins = max({a, b, c});
    int needed = (3 * maxCoins) - (a + b + c);

    if (n >= needed && (n - needed) % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
