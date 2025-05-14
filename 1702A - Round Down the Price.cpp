#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m;
        cin >> m;

        int powerOfTen = 1;
        while (powerOfTen * 10 <= m) {
            powerOfTen *= 10;
        }

        cout << m - powerOfTen << endl;
    }

    return 0;
}

