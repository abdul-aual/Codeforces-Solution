#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        int total_efficiency = 0;
        total_efficiency = (n * (n - 1)) / 2;
        cout << -sum << endl;
    }
    return 0;
}

