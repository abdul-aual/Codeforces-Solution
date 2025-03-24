#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        char c;
        cin >> s >> c;

        bool flag = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c && (i+1) % 2 !=0) {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}

