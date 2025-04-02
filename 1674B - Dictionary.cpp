#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int first_value = s[0] - 'a';
        int second_value = s[1] - 'a' + (s[0] > s[1]);
        cout << first_value * 25 + second_value << endl;
    }
}

