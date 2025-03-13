#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if (l == r && l==d &&  d == u) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
