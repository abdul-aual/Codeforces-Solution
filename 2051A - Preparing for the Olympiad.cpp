#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, diff = 0;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        if (n == 1) {
            cout << a[0] << endl;
        } else {
            for (int i = 0; i < n - 1; i++) {
                if (a[i] > b[i + 1]) {
                    diff += a[i] - b[i + 1];
                }
            }
            cout << diff + a[n - 1] << endl;
        }
    }
}
