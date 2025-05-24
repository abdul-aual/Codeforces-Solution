#include <iostream>
using namespace std;

int main()
{
    int n, m, moves = 0;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    int ratio = m / n;

    while (ratio % 2 == 0) {
        ratio /= 2;
        ++moves;
    }

    while (ratio % 3 == 0) {
        ratio /= 3;
        ++moves;
    }

    if (ratio != 1) {
        cout << -1 << endl;
    } else {
        cout << moves << endl;
    }

    return 0;
}

