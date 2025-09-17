#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int success_a = 0, total_a = 0;
    int success_b = 0, total_b = 0;

    for (int i = 0; i < n; ++i) {
        int t, x, y;
        cin >> t >> x >> y;

        if (t == 1) {
            success_a += x;
            total_a += x + y;
        } else {
            success_b += x;
            total_b += x + y;
        }
    }

    if (success_a * 2 >= total_a)
        cout << "LIVE" << endl;
    else
        cout << "DEAD" << endl;

    if (success_b * 2 >= total_b)
        cout << "LIVE" << endl;
    else
        cout << "DEAD" << endl;

    return 0;
}

