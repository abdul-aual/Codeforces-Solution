#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int limit = min(a, b);
    long long result = 1;

    for (int i = 2; i <= limit; ++i) {
        result *= i;
    }

    cout << result << endl;
    return 0;
}

