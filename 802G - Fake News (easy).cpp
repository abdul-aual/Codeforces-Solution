#include <iostream>
using namespace std;

int main() {
    string s, target = "heidi";
    cin >> s;
    int j = 0;
    for (char c : s) {
        if (c == target[j]) j++;
        if (j == target.size()) break;
    }
    cout << (j == target.size() ? "YES" : "NO") << endl;
    return 0;
}

