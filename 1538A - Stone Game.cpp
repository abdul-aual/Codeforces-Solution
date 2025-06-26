#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int minVal = 101, maxVal = 0, minIdx, maxIdx;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] < minVal) {
                minVal = a[i];
                minIdx = i;
            }
            if (a[i] > maxVal) {
                maxVal = a[i];
                maxIdx = i;
            }
        }
        int l = min(minIdx, maxIdx);
        int r = max(minIdx, maxIdx);
        int ans = min({r + 1, n - l, l + 1 + n - r});
        cout << ans << endl;
    }
    return 0;
}

