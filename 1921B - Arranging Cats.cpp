#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;

        int add = 0, remove = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0' && f[i] == '1') add++;
            else if (s[i] == '1' && f[i] == '0') remove++;
        }

        cout << max(add, remove) << '\n';
    }
    return 0;
}

