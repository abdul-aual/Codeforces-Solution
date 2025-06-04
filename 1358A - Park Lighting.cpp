#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int result = ( n * m + 1) / 2;
        cout << result << endl;
    }
    return 0;
}

