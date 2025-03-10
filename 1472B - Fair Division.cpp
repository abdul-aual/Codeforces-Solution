#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones = 0, twos = 0, total_weight = 0;

        for (int i = 0; i < n; i++) {
            int candy;
            cin >> candy;
            if (candy == 1) ones++;
            else twos++;
            total_weight += candy;
        }

        if (total_weight % 2 != 0) {
            cout << "NO\n";
        } else {
            int half = total_weight / 2;
            if (half % 2 == 0 || (ones > 0)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
