#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long a, b;
        cin >> a >> b;

        b = min(b, 2 * a);

        long long min_xy = min(x, y);
        long long diff_xy = abs(x - y);

        long long cost = min_xy * b + diff_xy * a;
        cout << cost << endl;
    }

    return 0;
}

