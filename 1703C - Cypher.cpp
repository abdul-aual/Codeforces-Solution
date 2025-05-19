#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);  // Final digits
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            int b;
            string s;
            cin >> b >> s;

            for (char move : s) {
                if (move == 'U') {
                    a[i] = (a[i] + 9) % 10;  // Equivalent to -1 mod 10
                } else if (move == 'D') {
                    a[i] = (a[i] + 1) % 10;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}

