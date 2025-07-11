#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> unique;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            unique.insert(x);
        }

        int uniqueCount = unique.size();
        int duplicateCount = n - uniqueCount;

        if (duplicateCount % 2 == 0)
            cout << uniqueCount << endl;
        else
            cout << uniqueCount - 1 << endl;
    }

    return 0;
}

