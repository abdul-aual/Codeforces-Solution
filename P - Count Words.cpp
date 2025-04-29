P - Count Words#include <iostream>
#include <string>
using namespace std;

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (isLetter(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}

