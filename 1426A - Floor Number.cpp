#include <iostream>
using namespace std;

void findFloor(int n, int x) {
    if (n == 1 || n == 2) {
        cout << 1 << endl;
    } else {

        int floor = ((n - 3) / x) + 2;
        cout << floor << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        findFloor(n, x);
    }

    return 0;
}
