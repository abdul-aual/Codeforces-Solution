#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, result;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }

        sort(arr.begin(), arr.end());

        result = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] > 1) {
                result = -1;
                break;
            }
        }

        cout << ((result == 1) ? "YES" : "NO") << endl;
    }

    return 0;
}

