#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, uniqueNum = 0;
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> uniqueSet;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            if (uniqueSet.find(arr[i]) == uniqueSet.end()) {
                ++uniqueNum;
                uniqueSet.insert(arr[i]);
            } else {
                break;
            }
        }

        cout << n - uniqueNum << endl;
    }
    return 0;
}

