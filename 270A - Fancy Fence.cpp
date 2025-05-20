#include <iostream>
using namespace std;

int main() {
    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;

        if ((360 % (180 - a)) == 0) {
            int n = 360 / (180 - a);
            if (n >= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

