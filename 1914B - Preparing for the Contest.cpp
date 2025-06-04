#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> res(n);
        for (int i = 0; i < k; ++i) {
            res[i] = i + 1;
        }
        int l = k, r = n - 1;
        for (int i = n; i > k; --i) {
            res[l++] = i;
        }
        for (int x : res) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}

