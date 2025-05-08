#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;

    vector<pair<int, int>> laptops(n);
    for (int i = 0; i < n; ++i) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end());

    for (int i = 1; i < n; ++i) {
        if (laptops[i].second < laptops[i - 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
    return 0;
}

