#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int k = 1; k < n; ++k) {
        int my_L = 0, my_O = 0;
        int fr_L = 0, fr_O = 0;


        for (int i = 0; i < k; ++i) {
            if (s[i] == 'L') my_L++;
            else my_O++;
        }


        for (int i = k; i < n; ++i) {
            if (s[i] == 'L') fr_L++;
            else fr_O++;
        }


        if (my_L != fr_L && my_O != fr_O) {
            cout << k << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

