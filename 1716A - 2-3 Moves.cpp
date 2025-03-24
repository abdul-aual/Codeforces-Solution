#include <iostream>
using namespace std;

int minMoves(int n) {
    int steps3 = n / 3;
    int remainder = n % 3;

    if (remainder == 0) {
        return steps3;
    } else if (remainder == 1) {
        if (steps3 >= 1) {
            return steps3 - 1 + 2;
        } else {
            return 2;
        }
    } else {
        return steps3 + 1;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << minMoves(n) << endl;
    }

    return 0;
}
