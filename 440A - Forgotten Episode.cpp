#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 1LL * n * (n + 1) / 2;

    int watched;
    for (int i = 0; i < n - 1; ++i) {
        cin >> watched;
        total -= watched;
    }

    cout << total << endl;
    return 0;
}

