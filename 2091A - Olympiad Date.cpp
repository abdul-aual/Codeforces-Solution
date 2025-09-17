#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    string target = "01032025";
    map<char, int> target_count;
    for (char ch : target) {
        target_count[ch]++;
    }

    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
        }

        map<char, int> freq;
        int matched = 0;

        for (int i = 0; i < n; ++i) {
            char ch = digits[i] + '0';

            if (freq[ch] < target_count[ch]) {
                freq[ch]++;
                matched++;
            }

            if (matched == 8) {
                cout << i + 1 << '\n';
                goto next_case;
            }
        }

        cout << 0 << '\n';

    next_case:;
    }

    return 0;
}

