#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int odd = 0, even = 0;
        int min_odd = INT_MAX, min_even = INT_MAX;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                ++even;
                min_even = min(min_even, a[i]);
            } else {
                ++odd;
                min_odd = min(min_odd, a[i]);
            }
        }

        if (min_odd == 1 || odd == 0 || even == 0 || min_odd < min_even) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

