#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int min_pos = a + 1;
    int max_pos_allowed = n - b;
    int lower_bound = max(min_pos, max_pos_allowed);

    if (lower_bound > n) {
        cout << 0 << endl;
    } else {
        cout << n - lower_bound + 1 << endl;
    }

    return 0;
}
