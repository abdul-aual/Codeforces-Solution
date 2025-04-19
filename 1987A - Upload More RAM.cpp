#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << endl;
        } else {
            cout << (n - 1) * k + 1 << endl;
        }
    }

    return 0;
}
