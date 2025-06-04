#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string cur = x;
        int ops = 0;

        while (cur.find(s) == string::npos) {
            if (cur.length() > s.length() * 2 + x.length()) {
                ops = -1;
                break;
            }
            cur += cur;
            ops++;
        }

        cout << ops << endl;
    }
    return 0;
}
