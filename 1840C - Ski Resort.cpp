#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q, max_day_seq = 0;
        long long ways = 0;
        cin >> n >> k >> q;
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
            if (temp[i] <= q) {
                ++max_day_seq;
            }
            if (temp[i] > q || i + 1 == n) {
                if (max_day_seq >= k) {
                    long long len = max_day_seq - k + 1;
                    ways += len * (len + 1) / 2;
                }
                max_day_seq = 0;
            }
        }
        cout << ways << endl;
    }
}

