#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int removeCount = 0;


    for (int i = 2; i < n ; i++) {
        if (s[i] == 'x' && s[i -1] == 'x' && s[i - 2] == 'x') {
            removeCount++;
        }
    }

    cout << removeCount << endl;
    return 0;
}
