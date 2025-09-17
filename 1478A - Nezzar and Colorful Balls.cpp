#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int max_freq = 0;
        for (auto& p : freq) {
            max_freq = max(max_freq, p.second);
        }
        cout << max_freq << '\n';
    }
    return 0;
}

