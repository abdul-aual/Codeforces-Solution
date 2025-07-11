#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cin >> password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
    }

    if (password.length() >= 5 && hasUpper && hasLower && hasDigit)
        cout << "Correct" << endl;
    else
        cout << "Too weak" << endl;

    return 0;
}
