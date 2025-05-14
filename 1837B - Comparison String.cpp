#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, maxL = 1, currentL = 1;
        string s;
        cin >> n >> s;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                currentL++;
            } else {
                currentL = 1;
            }
            maxL = max(maxL, currentL);
        }

        cout << maxL + 1 << endl;
    }
}

