#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        vector<pair<int, int>> paired(n);
        for (int i = 0; i < n; ++i) {
            paired[i] = {a[i], b[i]};
        }

        sort(paired.begin(), paired.end(), [](pair<int,int> x, pair<int,int> y) {
            return x.first + x.second < y.first + y.second;
        });

        for (int i = 0; i < n; ++i) {
            cout << paired[i].first << " ";
        }
        cout << endl;

        for (int i = 0; i < n; ++i) {
            cout << paired[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}

