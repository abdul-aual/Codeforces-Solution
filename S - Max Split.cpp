#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    int balance = 0, start = 0;
    vector<string> result;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'L') balance++;
        else balance--;
        if (balance == 0) {
            result.push_back(S.substr(start, i - start + 1));
            start = i + 1;
        }
    }

    cout << result.size() << endl;
    for (auto &str : result) cout << str << endl;
    return 0;
}

