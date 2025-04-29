#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;

        string result = "";
        int i = 0, j = 0;
        int len_s = s.size(), len_t = t.size();

        while (i < len_s || j < len_t) {
            if (i < len_s) result += s[i++];
            if (j < len_t) result += t[j++];
        }

        cout << result << endl;
    }

    return 0;
}

