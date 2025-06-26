#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        int ones = 0, twos = 0;
        for (auto& p : freq) {
            if (p.second == 1) ones++;
            else twos++;
        }
        cout << twos + ones / 2 << '\n';
    }
    return 0;
}

