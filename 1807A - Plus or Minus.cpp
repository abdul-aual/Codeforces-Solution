#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << (a + b == c ? '+' : '-') << endl;
    }
}

