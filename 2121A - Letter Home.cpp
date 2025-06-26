#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; ++i) cin >> x[i];
        int lo = *min_element(x.begin(), x.end());
        int hi = *max_element(x.begin(), x.end());
        int steps = abs(s - lo) + abs(hi - lo);
        int steps2 = abs(s - hi) + abs(hi - lo);
        cout << min(steps, steps2) << '\n';
    }
    return 0;
}
