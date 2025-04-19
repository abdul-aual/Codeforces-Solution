#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, sum1 = 0, sum2 = 0;
        cin >> n >> k;
        vector<int> arr1(n), arr2(n);

        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
            sum1 += arr1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < k; i++) {
            if (arr2[n-1] > arr1[i]) {
                sum1 += (arr2[n-1] - arr1[i]);
                --n;
            } else {
                break;
            }
        }

        cout << sum1 << endl;
    }

    return 0;
}

