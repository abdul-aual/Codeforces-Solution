#include <iostream>
using namespace std;

int solve(string a, string b) {
    string s = a + b;
    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) return 0;
    if (s[0] == s[1] && s[1] == s[2]) return 1;
    if (s[0] == s[1] && s[1] == s[3]) return 1;
    if (s[0] == s[2] && s[2] == s[3]) return 1;
    if (s[1] == s[2] && s[2] == s[3]) return 1;

    if ((s[0] == s[1] && s[2] == s[3] && s[0] != s[2]) ||
        (s[0] == s[2] && s[1] == s[3] && s[0] != s[1]) ||
        (s[0] == s[3] && s[1] == s[2] && s[0] != s[1])) return 1;

    if (s[0] == s[1] || s[0] == s[2] || s[0] == s[3] ||
        s[1] == s[2] || s[1] == s[3] || s[2] == s[3]) {
        return 2;
    }
    return 3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}

