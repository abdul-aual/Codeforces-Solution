#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int fav_value = a[f - 1];
        int count_greater = 0, count_equal = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > fav_value) count_greater++;
            else if (a[i] == fav_value) count_equal++;
        }

        if (count_greater >= k) {
            cout << "NO\n";
        } else if (count_greater + count_equal <= k) {
            cout << "YES\n";
        } else {
            cout << "MAYBE\n";
        }
    }
    return 0;
}

