#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for (int i = 0; i < n; ++i) {
            cin >> w[i];
        }

        int left = 0, right = n - 1;
        int sum_left = 0, sum_right = 0;
        int max_candies = 0;

        while (left <= right) {
            if (sum_left < sum_right) {
                sum_left += w[left];
                left++;
            } else if (sum_left > sum_right) {
                sum_right += w[right];
                right--;
            } else {
                max_candies = left + (n - right - 1);
                sum_left += w[left];
                left++;
            }
        }

        if (sum_left == sum_right) {
            max_candies = left + (n - right - 1);
        }

        cout << max_candies << '\n';
    }

    return 0;
}
