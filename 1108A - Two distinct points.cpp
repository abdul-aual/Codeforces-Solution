#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if (l1 != l2) {
            cout << l1 << " " << l2 << endl;
        } else {
            cout << l1 << " " << l2 + 1 << endl;
        }
    }

    return 0;
}
