#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    vector<int> result(n);
    unordered_set<int> seen;

    for (int i = n - 1; i >= 0; i--) {
        seen.insert(a[i]);
        result[i] = seen.size();
    }

    for (int i = 0; i < m; i++) {
        cout << result[queries[i] - 1] << endl;
    }

    return 0;
}
