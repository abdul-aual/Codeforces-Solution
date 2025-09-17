#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end());
        int min_lvl = a[0];
        int count = 0;
        for (int i = 1; i < n; ++i)
            if (a[i] > min_lvl) ++count;
        cout << count << "\n";
    }
    return 0;
}

