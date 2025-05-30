#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;

        long long row = (x - 1) % n + 1;
        long long col = (x - 1) / n + 1;
        long long result = (row - 1) * m + col;

        cout << result << "\n";
    }
    return 0;
}

