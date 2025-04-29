#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word;
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            reverse(word.begin(), word.end());
            cout << word << ' ';
            word.clear();
        }
    }


    if (!word.empty()) {
        reverse(word.begin(), word.end());
        cout << word;
    }

    cout << '\n';
    return 0;
}

