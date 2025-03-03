#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int result = -1;
        for (int i = 0; i < n; i++) {
            if (freq[arr[i]] >= 3) {
                result = arr[i];
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
