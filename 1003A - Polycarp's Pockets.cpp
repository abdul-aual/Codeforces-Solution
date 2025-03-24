
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, maxFreq = 0;
    cin >> n;

    vector<int> freq(101, 0);

    for (int i = 0, x; i < n; i++) {
        cin >> x;
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
    }

    cout << maxFreq << endl;
    return 0;
}
