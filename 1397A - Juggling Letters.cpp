#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        vector<int> freq(26, 0);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            for (char c : s[i]) {
                freq[c - 'a']++;
            }
        }

        bool possible = true;
        for (int count : freq) {
            if (count % n != 0) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}

