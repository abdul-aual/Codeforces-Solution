#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    short t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << (n == 5 && is_permutation(s.begin(), s.end(), "Timur") ? "YES" : "NO") << endl;
    }
    return 0;
}

