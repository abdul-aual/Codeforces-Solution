#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int minDiff = 1e9;
    for (int i = 0; i <= m - n; i++) {
        int diff = arr[i + n - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;
    return 0;
}

