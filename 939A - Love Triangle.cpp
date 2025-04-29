#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> f[i];
    }

    for (int i = 1; i <= n; i++) {
        int a = f[i];
        int b = f[a];
        int c = f[b];

        if (c == i) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}

