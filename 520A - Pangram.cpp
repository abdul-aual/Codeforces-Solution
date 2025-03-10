#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;int n;
    cin>>n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    int m = 97;
    bool found = true;

    while (m <= 122) {
        bool found_current_char = false;
        for (int i = 0; i < n; i++) {
            if ((int)s[i] == m) {
                found_current_char = true;
                break;
            }
        }
        if (!found_current_char) {
            found = false;
            break;
        }
        ++m;
    }

    found? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}

