
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = true;

    for (int i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') {
            i += 3;
        }
        else if (i + 1 < s.length() && s[i] == '1' && s[i + 1] == '4') {
            i += 2;
        }
        else if (s[i] == '1') {
            i += 1;
        }
        else {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}
