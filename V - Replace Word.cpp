
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    string target = "EGYPT";
    string result;
    int i = 0;

    while (i < S.size()) {
        if (i + 4 < S.size() && S.substr(i, 5) == target) {
            result += ' ';
            i += 5;
        } else {
            result += S[i];
            i++;
        }
    }

    cout << result << endl;
    return 0;
}
