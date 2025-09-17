#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int minPerimeter = 1e9;

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            int perimeter = 2 * (a + b);
            if (perimeter < minPerimeter) {
                minPerimeter = perimeter;
            }
        }
    }

    cout << minPerimeter << endl;
    return 0;
}

