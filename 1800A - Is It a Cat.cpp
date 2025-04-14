#include <iostream>
#include <algorithm>
using namespace std;

bool isMeow(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string pattern = "meow";
    int i = 0, j = 0;

    while (i < s.size() && j < 4) {
        if (s[i] != pattern[j]) return false;

        while (i < s.size() && s[i] == pattern[j]) {
            i++;
        }
        j++;
    }

    return i == s.size() && j == 4;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isMeow(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
