#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << n - 1 << endl;  // Number of valid pairs (a, b) is always (n-1)
    }

    return 0;
}
