#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << (n * (m / 2)) << endl;
    }
    return 0;
}

