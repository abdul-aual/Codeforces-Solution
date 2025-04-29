#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    unordered_set<int> seen;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            result.push_back(i + 1);
        }
    }

    if (result.size() >= k) {
        cout << "YES\n";
        for (int i = 0; i < k; i++) {
            cout << result[i] << " ";
        }
        cout << '\n';
    } else {
        cout << "NO\n";
    }

    return 0;
}

