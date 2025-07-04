#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        if (k % 2 == 1) {
            long long mx = *max_element(a.begin(), a.end());
            for (auto x : a) cout << (mx - x) << " ";
        } else {
            long long mn = *min_element(a.begin(), a.end());
            for (auto x : a) cout << (x - mn) << " ";
        }
        cout << "\n";
    }
    return 0;
}

