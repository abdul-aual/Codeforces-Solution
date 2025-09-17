#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int base = n / m;
    int extra = n % m;

    vector<int> result(m, base);
    for (int i = 0; i < extra; ++i) {
        result[i]++;
    }

    for (int i = 0; i < m; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}

