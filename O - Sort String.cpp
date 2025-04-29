#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int freq[26] = {0};
    char c;

    for (int i = 0; i < n; ++i) {
        cin >> c;
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        while (freq[i]--) {
            cout << char(i + 'a');
        }
    }

    return 0;
}
