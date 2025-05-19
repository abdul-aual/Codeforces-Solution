#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), sorted_a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sorted_a[i] = a[i];
    }

    sort(sorted_a.begin(), sorted_a.end());

    int l = 0, r = n - 1;
    while (l < n && a[l] == sorted_a[l]) ++l;
    while (r >= 0 && a[r] == sorted_a[r]) --r;

    if (l >= r) {
        cout << "yes\n";
        cout << "1 1\n";
        return 0;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == sorted_a) {
        cout << "yes\n";
        cout << l + 1 << " " << r + 1 << "\n";
    } else {
        cout << "no\n";
    }

    return 0;
}

