#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double maxGap = 0;
    for (int i = 1; i < n; i++) {
        double gap = (arr[i] - arr[i - 1]) / 2.0;
        maxGap = max(maxGap, gap);
    }

    double leftEdge = arr[0] != 0 ? arr[0] : 0;
    double rightEdge = arr[n - 1] != l ? l - arr[n - 1] : 0;

    double ans = max({maxGap, leftEdge, rightEdge});
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}

