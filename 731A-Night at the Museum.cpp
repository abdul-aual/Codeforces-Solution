#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    int move = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int m;
        if (i == 0) {
            int bal = s[i] - 'a';
            m = abs(bal);
        } else {
            int bal = s[i] - s[i - 1];
            m = abs(bal);
        }
        if (m > 13) {
            m = 26 - m;
        }
        move += m;
    }

    cout << move << endl;
    return 0;
}

