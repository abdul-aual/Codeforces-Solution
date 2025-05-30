#include <iostream>
using namespace std;

const int MAX_N = 200005;

int freq[MAX_N];
int firstIndex[MAX_N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            freq[i] = 0;
            firstIndex[i] = 0;
        }

        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
            if (firstIndex[x] == 0) {
                firstIndex[x] = i;
            }
        }

        int winnerIndex = -1;

        for (int i = 1; i <= n; ++i) {
            if (freq[i] == 1) {
                winnerIndex = firstIndex[i];
                break;
            }
        }

        cout << winnerIndex << '\n';
    }

    return 0;
}
