#include <iostream>
using namespace std;

int count_valid_pairs(int n, int m) {
    int count = 0;
    for (int a = 0; a <= 1000; ++a) {
        for (int b = 0; b <= 1000; ++b) {
            if (a * a + b == n && a + b * b == m) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << count_valid_pairs(n, m) << endl;
    return 0;
}

