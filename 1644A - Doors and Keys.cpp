#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = true;

        int R,G,B;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') R = i;
            else if (s[i] == 'G') G = i;
            else if (s[i] == 'B') B = i;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'r' &&  R < i) { flag = false; break; }
            if (s[i] == 'g' && G < i) { flag = false; break; }
            if (s[i] == 'b' && B < i) { flag = false; break; }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}

