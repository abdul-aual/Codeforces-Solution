#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100005;

int main() {
    int n;
    cin >> n;
    vector<long long> count(MAX, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    vector<long long> dp(MAX, 0);
    dp[0] = 0;
    dp[1] = count[1] * 1;

    for (int i = 2; i < MAX; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
    }

    cout << dp[MAX - 1] << endl;
    return 0;
}

