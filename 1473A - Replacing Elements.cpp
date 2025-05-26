#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int max_elem = *max_element(a.begin(), a.end());
        if (max_elem <= d) {
            cout << "YES\n";
            continue;
        }
        sort(a.begin(), a.end());
        if (a[0] + a[1] <= d) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
