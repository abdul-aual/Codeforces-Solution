#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int x = a & b;
        int result = (a ^ x) + (b ^ x);
        cout << result << endl;
    }

    return 0;
}

