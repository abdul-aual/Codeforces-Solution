#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;

        bool possible = false;

        for (int i = 0; i < n; ++i) {
            if (c[i] != a[i] && c[i] != b[i]) {
                possible = true;
                break;
            }
            if (a[i] == b[i] && a[i] != c[i]) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}

