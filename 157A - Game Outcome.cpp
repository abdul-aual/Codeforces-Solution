#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[30][30], rowSum[30] = {}, colSum[30] = {};

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }

    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (colSum[j] > rowSum[i])
                ++count;

    cout << count;
    return 0;
}

