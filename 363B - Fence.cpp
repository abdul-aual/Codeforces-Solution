#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += h[i];
    }

    int min_sum = sum;
    int min_index = 0;

    for (int i = k; i < n; ++i) {
        sum += h[i] - h[i - k];
        if (sum < min_sum) {
            min_sum = sum;
            min_index = i - k + 1;
        }
    }

    cout << min_index + 1 << endl;
    return 0;
}

