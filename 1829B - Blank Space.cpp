#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestBlankSpace(const vector<int>& arr) {
    int maxLen = 0, currentLen = 0;
    for (int num : arr) {
        if (num == 0) {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        } else {
            currentLen = 0;
        }
    }
    return maxLen;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestBlankSpace(arr) << endl;
    }
    return 0;
}
