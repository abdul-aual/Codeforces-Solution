#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_sorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); ++i)
        if (a[i - 1] > a[i])
            return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 1; i < n - 1; ++i) {
                if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                    swap(a[i], a[i + 1]);
                    changed = true;
                }
            }
        }
        cout << (is_sorted(a) ? "YES" : "NO") << '\n';
    }
    return 0;
}
