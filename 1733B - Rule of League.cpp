#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        if ((x == 0 && y == 0) || (x != 0 && y != 0)) {
            cout << -1 << endl;
            continue;
        }
        if (x < y) swap(x, y);
        if ((n - 1) % x != 0) {
            cout << -1 << endl;
            continue;
        }
        int cnt = (n - 1) / x;
        vector<int> res;
        int curr = 2;
        for (int i = 0; i < cnt; ++i) {
            for (int j = 0; j < x; ++j) res.push_back(curr);
            curr += x;
        }
        for (int i = 0; i < res.size(); ++i) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}

