#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int square = sqrt(n);
        int cube = cbrt(n);
        int six = sqrt(cbrt(n));

        cout << (square + cube - six) << endl;
    }

    return 0;
}

