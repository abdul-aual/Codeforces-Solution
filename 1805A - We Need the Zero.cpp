#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int answer = -1;

        for (int x = 0; x < 256; ++x) {
            int total = 0;
            for (int i = 0; i < n; ++i) {
                total ^= (a[i] ^ x);
            }

            if (total == 0) {
                answer = x;
                break;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}

