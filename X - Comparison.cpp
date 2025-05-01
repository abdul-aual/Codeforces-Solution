
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.size() == 1) {
        cout << S << endl;
        return 0;
    }

    string answer = S;
    for (int i = 1; i < S.size(); i++) {
        string X = S.substr(0, i);
        string Y = S.substr(i);
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());
        string combined = X + Y;
        if (combined < answer) {
            answer = combined;
        }
    }

    cout << answer << endl;
    return 0;
}
