#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> bids;
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        bids.push_back({p, i + 1});
    }
    sort(bids.begin(), bids.end(), greater<>());
    cout << bids[0].second << " " << bids[1].first << endl;
    return 0;
}

