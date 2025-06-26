#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;

        if (n == 1) {
            cout << 0 << "\n";
        } else if (n == 2) {
            cout << m << "\n";
        } else {
            cout << 2 * m << "\n";
        }
    }

    return 0;
}

