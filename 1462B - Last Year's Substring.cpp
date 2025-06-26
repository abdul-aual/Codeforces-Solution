#include <iostream>
using namespace std;

bool canForm2020(const string& s, int n) {
    return
        s.substr(0, 4) == "2020" ||
        s.substr(0, 3) + s.substr(n - 1) == "2020" ||
        s.substr(0, 2) + s.substr(n - 2) == "2020" ||
        s.substr(0, 1) + s.substr(n - 3) == "2020" ||
        s.substr(n - 4) == "2020";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << (canForm2020(s, n) ? "YES" : "NO") << endl;
    }
    return 0;
}

