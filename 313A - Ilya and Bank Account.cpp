#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl;
    } else {
        string s = to_string(n);
        int len = s.length();

        if (s[len - 1] >= s[len - 2]) {
            s.erase(len - 1);
        } else {
            s.erase(len - 2, 1);
        }

        int result = stoi(s);
        cout << result << endl;
    }

    return 0;
}

