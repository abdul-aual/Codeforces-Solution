#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int pairs = n / 2;
        int rem = n % 2;

        int cost = pairs * min(2 * a, b) + rem * a;
        cout << cost << endl;
    }

    return 0;
}
