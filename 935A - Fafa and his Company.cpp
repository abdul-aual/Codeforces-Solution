#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int l = 1; l < n; l++) {
        if (n % l == 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
