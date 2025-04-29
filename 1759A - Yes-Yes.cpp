#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string pattern = "Yes";

    while (t--) {
        string s;
        cin >> s;
        bool flag = true;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != pattern[(pattern.find(s[0]) + i) % 3]) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
