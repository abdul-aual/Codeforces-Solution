#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> gaps;
        if (a[0] >= 0) gaps.push_back(a[0]);
        for (int i = 1; i < n; ++i) gaps.push_back(a[i] - a[i - 1]);
        if (1440 - a[n - 1] > 0) gaps.push_back(1440 - a[n - 1]);

        int cnt = 0;
        for (int g : gaps) {
            if (g >= 120) cnt += g / 120;
        }

        if (cnt >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

