
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int count = 0;

        for (int digit = 1; digit <= 9; ++digit) {
            int num = 0;
            for (int len = 1; len <= 9; ++len) {
                num = num * 10 + digit;
                if (num <= n) {
                    ++count;
                } else {
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
