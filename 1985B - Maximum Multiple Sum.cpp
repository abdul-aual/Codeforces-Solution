#include <iostream>
using namespace std;

int getMaxMultipleSumX(int n) {
    int maxSum = 0;
    int resultX = 2;

    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int sum = x * k * (k + 1) / 2;
        if (sum > maxSum) {
            maxSum = sum;
            resultX = x;
        }
    }

    return resultX;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << getMaxMultipleSumX(n) << endl;
    }
    return 0;
}
