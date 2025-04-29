#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        int len1 = x1.length() + p1;
        int len2 = x2.length() + p2;

        if (len1 < len2) {
            cout << "<\n";
        } else if (len1 > len2) {
            cout << ">\n";
        } else {
            while (x1.length() < x2.length()) x1 += '0';
            while (x2.length() < x1.length()) x2 += '0';
            if (x1 < x2) cout << "<\n";
            else if (x1 > x2) cout << ">\n";
            else cout << "=\n";
        }
    }
    return 0;
}

