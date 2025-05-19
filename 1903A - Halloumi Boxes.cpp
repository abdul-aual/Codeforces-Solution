#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> box(n), sorted_box(n);

        for (int i = 0; i < n; i++) {
            cin >> box[i];
            sorted_box[i] = box[i];
        }

        sort(sorted_box.begin(), sorted_box.end());

        if (k == 1) {
            if (box == sorted_box) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

