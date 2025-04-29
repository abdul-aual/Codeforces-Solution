#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;

        if (S.find("010") != string::npos || S.find("101") != string::npos) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }
    return 0;
}


