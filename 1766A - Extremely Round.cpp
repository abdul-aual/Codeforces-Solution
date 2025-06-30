#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;
        for (int d = 1; d <= 9; ++d) {
            int val = d;
            while (val <= n) {
                ++count;
                val *= 10;
            }
        }

        cout << count << endl;
    }

    return 0;
}

