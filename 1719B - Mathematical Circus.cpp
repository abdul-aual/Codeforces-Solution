#include <iostream>
using namespace std;

int main() {
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 0 || k % 4 == 0) {
            cout << "NO\n";
        } else if (k % 2 != 0) {
            cout << "YES\n";
            for (int i = 1; i <= n;) {
                cout << i << " " << i + 1 << "\n";
                i += 2;
            }
        } else {
            cout << "YES\n";
            for (int i = 3; i <= n;) {
                cout << i << " " << i + 1 << "\n";
                i += 4;
            }
            for (int i = 1; i <= n;) {
                cout << i + 1 << " " << i << "\n";
                i += 4;
            }
        }
    }
    return 0;
}

