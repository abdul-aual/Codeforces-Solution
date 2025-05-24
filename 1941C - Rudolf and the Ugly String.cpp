#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, remove_char = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n;) {
            if (i + 2 < n && s.substr(i, 3) == "map") {
                remove_char++;
                i += 3;
            } else if (i + 2 < n && s.substr(i, 3) == "pie") {
                remove_char++;
                i += 3;
            } else {
                i++;
            }
        }

        cout << remove_char << endl;
    }

    return 0;
}

