#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int d = x % 10;
        int len = to_string(x).size();

        int result = (d - 1) * 10 + (len * (len + 1)) / 2;
        cout << result << endl;
    }
    return 0;
}

